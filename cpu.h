#ifndef _CPU_H_
#define _CPU_H_

// Holds all information about the CPU
struct cpu {
  // PC & FL
  unsigned char pc;
  unsigned char fl;
  // registers (array) -- R0->R7 (8 items)
  unsigned char reg[8];
  // ram (array) -- With 8 bits, our CPU has a total of 256 bytes of memory
  unsigned char ram[256];
};

// ALU operations
// enum alu_op {
// 	ALU_MUL,
//   ALU_ADD
// };

// Instructions

// These use binary literals. If these aren't available with your compiler, hex
// literals should be used.

#define GEN  0b0000
#define HLT  0b00000001
#define LDI  0b10000010
#define ST   0b10000100
#define PUSH 0b01000101
#define POP  0b01000110 
#define PRN  0b01000111

#define PC   0b0001
#define CALL 0b01010000
#define RET  0b00010001
#define JMP  0b01010100
#define JEQ  0b01010101
#define JNE  0b01010110

#define ALU  0b0010
#define ADD  0b10100000
#define SUB  0b10100001
#define MUL  0b10100010
#define DIV  0b10100011
#define MOD  0b10100100

#define INC  0b01100101
#define DEC  0b01100110

#define CMP  0b10100111

#define AND  0b10101000
#define NOT  0b01101001
#define OR   0b10101010
#define XOR  0b10101011
#define SHL  0b10101100
#define SHR  0b10101101

#define ADDI 0b10101110

// Flags
#define LTF  0b00000100 // less than flag
#define GTF  0b00000010 // greater than flag
#define ETF  0b00000001 // equal to flag

// Function declarations

extern void cpu_load(struct cpu *cpu, char *file);
extern void cpu_init(struct cpu *cpu);
extern void cpu_run(struct cpu *cpu);

#endif
