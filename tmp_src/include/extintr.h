// example.h

#ifndef EXTINTR_H
#define EXTINTR_H

#define CONTEXT_M 0
#define CONTEXT_S 1

void do_wfi();
void do_ext_intr();
void plic_intr_init();
void external_trigger(bool shall_trigger, bool wfi, int context);
void intr_num_enable(bool shall_trigger, bool wfi, int context, int intr_num);
uint32_t get_intr_num(int context); 


#endif // EXTINTR_H