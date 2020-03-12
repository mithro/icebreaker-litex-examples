//--------------------------------------------------------------------------------
// Auto-generated by Migen (3f9809b) & LiteX (a27385a7) on 2020-03-12 14:21:34
//--------------------------------------------------------------------------------
#include <generated/soc.h>
#ifndef __GENERATED_CSR_H
#define __GENERATED_CSR_H
#include <stdint.h>
#ifdef CSR_ACCESSORS_DEFINED
extern void csr_write_simple(unsigned long v, unsigned long a);
extern unsigned long csr_read_simple(unsigned long a);
#else /* ! CSR_ACCESSORS_DEFINED */
#include <hw/common.h>
#endif /* ! CSR_ACCESSORS_DEFINED */

/* ctrl */
#define CSR_CTRL_BASE 0xe0000000L
#define CSR_CTRL_RESET_ADDR 0xe0000000L
#define CSR_CTRL_RESET_SIZE 1
static inline uint32_t ctrl_reset_read(void) {
	return csr_read_simple(0xe0000000L);
}
static inline void ctrl_reset_write(uint32_t v) {
	csr_write_simple(v, 0xe0000000L);
}
#define CSR_CTRL_SCRATCH_ADDR 0xe0000004L
#define CSR_CTRL_SCRATCH_SIZE 1
static inline uint32_t ctrl_scratch_read(void) {
	return csr_read_simple(0xe0000004L);
}
static inline void ctrl_scratch_write(uint32_t v) {
	csr_write_simple(v, 0xe0000004L);
}
#define CSR_CTRL_BUS_ERRORS_ADDR 0xe0000008L
#define CSR_CTRL_BUS_ERRORS_SIZE 1
static inline uint32_t ctrl_bus_errors_read(void) {
	return csr_read_simple(0xe0000008L);
}

/* uart_phy */
#define CSR_UART_PHY_BASE 0xe0001000L
#define CSR_UART_PHY_TUNING_WORD_ADDR 0xe0001000L
#define CSR_UART_PHY_TUNING_WORD_SIZE 1
static inline uint32_t uart_phy_tuning_word_read(void) {
	return csr_read_simple(0xe0001000L);
}
static inline void uart_phy_tuning_word_write(uint32_t v) {
	csr_write_simple(v, 0xe0001000L);
}

/* uart */
#define CSR_UART_BASE 0xe0001800L
#define CSR_UART_RXTX_ADDR 0xe0001800L
#define CSR_UART_RXTX_SIZE 1
static inline uint32_t uart_rxtx_read(void) {
	return csr_read_simple(0xe0001800L);
}
static inline void uart_rxtx_write(uint32_t v) {
	csr_write_simple(v, 0xe0001800L);
}
#define CSR_UART_TXFULL_ADDR 0xe0001804L
#define CSR_UART_TXFULL_SIZE 1
static inline uint32_t uart_txfull_read(void) {
	return csr_read_simple(0xe0001804L);
}
#define CSR_UART_RXEMPTY_ADDR 0xe0001808L
#define CSR_UART_RXEMPTY_SIZE 1
static inline uint32_t uart_rxempty_read(void) {
	return csr_read_simple(0xe0001808L);
}
#define CSR_UART_EV_STATUS_ADDR 0xe000180cL
#define CSR_UART_EV_STATUS_SIZE 1
static inline uint32_t uart_ev_status_read(void) {
	return csr_read_simple(0xe000180cL);
}
static inline void uart_ev_status_write(uint32_t v) {
	csr_write_simple(v, 0xe000180cL);
}
#define CSR_UART_EV_PENDING_ADDR 0xe0001810L
#define CSR_UART_EV_PENDING_SIZE 1
static inline uint32_t uart_ev_pending_read(void) {
	return csr_read_simple(0xe0001810L);
}
static inline void uart_ev_pending_write(uint32_t v) {
	csr_write_simple(v, 0xe0001810L);
}
#define CSR_UART_EV_ENABLE_ADDR 0xe0001814L
#define CSR_UART_EV_ENABLE_SIZE 1
static inline uint32_t uart_ev_enable_read(void) {
	return csr_read_simple(0xe0001814L);
}
static inline void uart_ev_enable_write(uint32_t v) {
	csr_write_simple(v, 0xe0001814L);
}

/* timer0 */
#define CSR_TIMER0_BASE 0xe0002000L
#define CSR_TIMER0_LOAD_ADDR 0xe0002000L
#define CSR_TIMER0_LOAD_SIZE 1
static inline uint32_t timer0_load_read(void) {
	return csr_read_simple(0xe0002000L);
}
static inline void timer0_load_write(uint32_t v) {
	csr_write_simple(v, 0xe0002000L);
}
#define CSR_TIMER0_RELOAD_ADDR 0xe0002004L
#define CSR_TIMER0_RELOAD_SIZE 1
static inline uint32_t timer0_reload_read(void) {
	return csr_read_simple(0xe0002004L);
}
static inline void timer0_reload_write(uint32_t v) {
	csr_write_simple(v, 0xe0002004L);
}
#define CSR_TIMER0_EN_ADDR 0xe0002008L
#define CSR_TIMER0_EN_SIZE 1
static inline uint32_t timer0_en_read(void) {
	return csr_read_simple(0xe0002008L);
}
static inline void timer0_en_write(uint32_t v) {
	csr_write_simple(v, 0xe0002008L);
}
#define CSR_TIMER0_UPDATE_VALUE_ADDR 0xe000200cL
#define CSR_TIMER0_UPDATE_VALUE_SIZE 1
static inline uint32_t timer0_update_value_read(void) {
	return csr_read_simple(0xe000200cL);
}
static inline void timer0_update_value_write(uint32_t v) {
	csr_write_simple(v, 0xe000200cL);
}
#define CSR_TIMER0_VALUE_ADDR 0xe0002010L
#define CSR_TIMER0_VALUE_SIZE 1
static inline uint32_t timer0_value_read(void) {
	return csr_read_simple(0xe0002010L);
}
#define CSR_TIMER0_EV_STATUS_ADDR 0xe0002014L
#define CSR_TIMER0_EV_STATUS_SIZE 1
static inline uint32_t timer0_ev_status_read(void) {
	return csr_read_simple(0xe0002014L);
}
static inline void timer0_ev_status_write(uint32_t v) {
	csr_write_simple(v, 0xe0002014L);
}
#define CSR_TIMER0_EV_PENDING_ADDR 0xe0002018L
#define CSR_TIMER0_EV_PENDING_SIZE 1
static inline uint32_t timer0_ev_pending_read(void) {
	return csr_read_simple(0xe0002018L);
}
static inline void timer0_ev_pending_write(uint32_t v) {
	csr_write_simple(v, 0xe0002018L);
}
#define CSR_TIMER0_EV_ENABLE_ADDR 0xe000201cL
#define CSR_TIMER0_EV_ENABLE_SIZE 1
static inline uint32_t timer0_ev_enable_read(void) {
	return csr_read_simple(0xe000201cL);
}
static inline void timer0_ev_enable_write(uint32_t v) {
	csr_write_simple(v, 0xe000201cL);
}

/* spiflash */
#define CSR_SPIFLASH_BASE 0xe0002800L
#define CSR_SPIFLASH_BITBANG_ADDR 0xe0002800L
#define CSR_SPIFLASH_BITBANG_SIZE 1
static inline uint32_t spiflash_bitbang_read(void) {
	return csr_read_simple(0xe0002800L);
}
static inline void spiflash_bitbang_write(uint32_t v) {
	csr_write_simple(v, 0xe0002800L);
}
#define CSR_SPIFLASH_BITBANG_MOSI_OFFSET 0
#define CSR_SPIFLASH_BITBANG_MOSI_SIZE 1
#define CSR_SPIFLASH_BITBANG_CLK_OFFSET 1
#define CSR_SPIFLASH_BITBANG_CLK_SIZE 1
#define CSR_SPIFLASH_BITBANG_CS_N_OFFSET 2
#define CSR_SPIFLASH_BITBANG_CS_N_SIZE 1
#define CSR_SPIFLASH_BITBANG_DIR_OFFSET 3
#define CSR_SPIFLASH_BITBANG_DIR_SIZE 1
#define CSR_SPIFLASH_MISO_ADDR 0xe0002804L
#define CSR_SPIFLASH_MISO_SIZE 1
static inline uint32_t spiflash_miso_read(void) {
	return csr_read_simple(0xe0002804L);
}
#define CSR_SPIFLASH_BITBANG_EN_ADDR 0xe0002808L
#define CSR_SPIFLASH_BITBANG_EN_SIZE 1
static inline uint32_t spiflash_bitbang_en_read(void) {
	return csr_read_simple(0xe0002808L);
}
static inline void spiflash_bitbang_en_write(uint32_t v) {
	csr_write_simple(v, 0xe0002808L);
}

/* leds */
#define CSR_LEDS_BASE 0xe0003000L
#define CSR_LEDS_OUT_ADDR 0xe0003000L
#define CSR_LEDS_OUT_SIZE 1
static inline uint32_t leds_out_read(void) {
	return csr_read_simple(0xe0003000L);
}
static inline void leds_out_write(uint32_t v) {
	csr_write_simple(v, 0xe0003000L);
}
#define CSR_LEDS_OUT_LEDR_OFFSET 0
#define CSR_LEDS_OUT_LEDR_SIZE 1
#define CSR_LEDS_OUT_LEDG_OFFSET 1
#define CSR_LEDS_OUT_LEDG_SIZE 1

#endif
