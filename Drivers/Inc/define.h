
typedef struct {
	unsigned long MODE_0 :2;
	unsigned long CNF_0 :2;
	unsigned long MODE_1 :2;
	unsigned long CNF_1 :2;
	unsigned long MODE_2 :2;
	unsigned long CNF_2 :2;
	unsigned long MODE_3 :2;
	unsigned long CNF_3 :2;
	unsigned long MODE_4 :2;
	unsigned long CNF_4 :2;
	unsigned long MODE_5 :2;
	unsigned long CNF_5 :2;
	unsigned long MODE_6 :2;
	unsigned long CNF_6 :2;
	unsigned long MODE_7 :2;
	unsigned long CNF_7 :2;
} CRL_BITS;
typedef struct {
	unsigned long MODE_8 :2;
	unsigned long CNF_8 :2;
	unsigned long MODE_9 :2;
	unsigned long CNF_9 :2;
	unsigned long MODE_10 :2;
	unsigned long CNF_10 :2;
	unsigned long MODE_11 :2;
	unsigned long CNF_11 :2;
	unsigned long MODE_12 :2;
	unsigned long CNF_12 :2;
	unsigned long MODE_13 :2;
	unsigned long CNF_13 :2;
	unsigned long MODE_14 :2;
	unsigned long CNF_14 :2;
	unsigned long MODE_15 :2;
	unsigned long CNF_15 :2;
} CRH_BITS;
typedef struct {
	unsigned short IDR_0 : 1;
	unsigned short IDR_1 : 1;
	unsigned short IDR_2 : 1;
	unsigned short IDR_3 : 1;
	unsigned short IDR_4 : 1;
	unsigned short IDR_5 : 1;
	unsigned short IDR_6 : 1;
	unsigned short IDR_7 : 1;
	unsigned short IDR_8 : 1;
	unsigned short IDR_9 : 1;
	unsigned short IDR_10 : 1;
	unsigned short IDR_11 : 1;
	unsigned short IDR_12 : 1;
	unsigned short IDR_13 : 1;
	unsigned short IDR_14 : 1;
	unsigned short IDR_15 : 1;
	unsigned short _reserved: 16;
} IDR_BITS;
typedef struct {
	unsigned short IDR_0 : 1;
	unsigned short IDR_1 : 1;
	unsigned short IDR_2 : 1;
	unsigned short IDR_3 : 1;
	unsigned short IDR_4 : 1;
	unsigned short IDR_5 : 1;
	unsigned short IDR_6 : 1;
	unsigned short IDR_7 : 1;
	unsigned short IDR_8 : 1;
	unsigned short IDR_9 : 1;
	unsigned short IDR_10 : 1;
	unsigned short IDR_11 : 1;
	unsigned short IDR_12 : 1;
	unsigned short IDR_13 : 1;
	unsigned short IDR_14 : 1;
	unsigned short IDR_15 : 1;
	unsigned short _reserved: 16;
} ODR_BITS;

typedef struct {
	unsigned short BS_0 : 1;
	unsigned short BS_1 : 1;
	unsigned short BS_2 : 1;
	unsigned short BS_3 : 1;
	unsigned short BS_4 : 1;
	unsigned short BS_5 : 1;
	unsigned short BS_6 : 1;
	unsigned short BS_7 : 1;
	unsigned short BS_8 : 1;
	unsigned short BS_9 : 1;
	unsigned short BS_10 : 1;
	unsigned short BS_11 : 1;
	unsigned short BS_12 : 1;
	unsigned short BS_13 : 1;
	unsigned short BS_14 : 1;
	unsigned short BS_15 : 1;

	unsigned short BR_0 : 1;
	unsigned short BR_1 : 1;
	unsigned short BR_2 : 1;
	unsigned short BR_3 : 1;
	unsigned short BR_4 : 1;
	unsigned short BR_5 : 1;
	unsigned short BR_6 : 1;
	unsigned short BR_7 : 1;
	unsigned short BR_8 : 1;
	unsigned short BR_9 : 1;
	unsigned short BR_10 : 1;
	unsigned short BR_11 : 1;
	unsigned short BR_12 : 1;
	unsigned short BR_13 : 1;
	unsigned short BR_14 : 1;
	unsigned short BR_15 : 1;

} BSRR_BITS;

typedef struct {
	unsigned short BR_0 : 1;
	unsigned short BR_1 : 1;
	unsigned short BR_2 : 1;
	unsigned short BR_3 : 1;
	unsigned short BR_4 : 1;
	unsigned short BR_5 : 1;
	unsigned short BR_6 : 1;
	unsigned short BR_7 : 1;
	unsigned short BR_8 : 1;
	unsigned short BR_9 : 1;
	unsigned short BR_10 : 1;
	unsigned short BR_11 : 1;
	unsigned short BR_12 : 1;
	unsigned short BR_13 : 1;
	unsigned short BR_14 : 1;
	unsigned short BR_15 : 1;
	unsigned short _reserved: 16;
} BSR_BITS;

typedef struct {
	unsigned short LCK_0	: 1;
	unsigned short LCK_1	: 1;
	unsigned short LCK_2	: 1;
	unsigned short LCK_3	: 1;
	unsigned short LCK_4	: 1;
	unsigned short LCK_5	: 1;
	unsigned short LCK_6	: 1;
	unsigned short LCK_7	: 1;
	unsigned short LCK_8	: 1;
	unsigned short LCK_9	: 1;
	unsigned short LCK_10	: 1;
	unsigned short LCK_11	: 1;
	unsigned short LCK_12	: 1;
	unsigned short LCK_13	: 1;
	unsigned short LCK_14	: 1;
	unsigned short LCKK 	: 1;

	unsigned short _reserved	: 15;
} LCKR_BITS;


