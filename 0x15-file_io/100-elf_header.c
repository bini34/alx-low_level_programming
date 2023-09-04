#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define ELF_MAGIC 0x7f454c46

int main(int argc, char *argv[]) {
	  unsigned char elf_header[64];
	    FILE *fp;

  if (argc != 2) {
    fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
    exit(1);
  }

  fp = fopen(argv[1], "rb");
  if (fp == NULL) {
    perror("fopen");
    exit(1);
  }

  if (fread(elf_header, 1, sizeof(elf_header), fp) != sizeof(elf_header)) {
    perror("fread");
    exit(1);
  }


  if (elf_header[0] != ELF_MAGIC) {
    fprintf(stderr, "Not an ELF file\n");
    exit(1);
  }

  printf("ELF Header:\n");
  printf("  Magic: 0x%08x\n", elf_header[0] | (elf_header[1] << 8) | (elf_header[2] << 16) | (elf_header[3] << 24));
  printf("  Class: %d\n", elf_header[4]);
  printf("  Data: %d\n", elf_header[5]);
  printf("  Version: %d\n", elf_header[6] | (elf_header[7] << 8));
  printf("  OS/ABI: %d\n", elf_header[8] | (elf_header[9] << 8));
  printf("  ABI Version: %d\n", elf_header[10] | (elf_header[11] << 8));
  printf("  Type: %d\n", elf_header[12] | (elf_header[13] << 8));
  printf("  Entry point address: 0x%08x\n", elf_header[14] | (elf_header[15] << 8) | (elf_header[16] << 16) | (elf_header[17] << 24));

  fclose(fp);
  return 0;
}

