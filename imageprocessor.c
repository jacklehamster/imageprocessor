#include <stdio.h>
#include <stdint.h>

int main(int argc, char ** argv) {
  printf("Good news everyone!\n");
}

void process(unsigned char* bytes, int length) {
    uint32_t * pLength = (uint32_t *)(bytes + 8);
    printf("Length: %u\n", *pLength);
}
