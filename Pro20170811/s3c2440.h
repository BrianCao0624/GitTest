#ifndef __S3C2440_H
#define __S3C2440_H


/*Memory Controler*/   
/*Bus Width and wait status control register*/
#define  BWSCON   (*(volatile *)0x48000000)

/*Bank control Register(NGC0~NGC5)*/
#define  BANKCON0  (*(volatile *)0x48000004)
#define  BANKCON1  (*(volatile *)0x48000008)
#define  BANKCON2  (*(volatile *)0x4800000c)
#define  BANKCON3  (*(volatile *)0x48000010)
#define  BANKCON4  (*(volatile *)0x48000014)
#define  BANKCON5  (*(volatile *)0x48000018)
/*Bank Control Register nGCS6~nGCS7*/
#define  BANKCON6  (*(volatile *)0x4800001c)
#define  BANKCON7  (*(volatile *)0x48000020)

/*Refresh Control Register*/
#define  REFRESH   (*(volatile *)0x48000024)
/*BankSize Register*/
#define  BANKSIZE  (*(volatile *)0x48000028)
/*SDRAM Mode Register Set Register*/
#define  MRSRB6    (*(volatile *)0x4800002c)
#define  MRSRB7    (*(volatile *)0x48000030)


/*NAND FLASH CONTROLER*/
/*NAND FLASH Configuration Register*/
#define  NFCONF    (*(volatile *)0x4E000000)
/*NAND FLASH Control Register*/
#define  NFCONT    (*(volatile *)0x4E000004)
/*NAND FLASH COMMAND REGISTER*/
#define  NFCMMD    (*(volatile *)0x4e000008)
/*NAND FLASH ADDRESS REGISTER*/
#define  NFADDR    (*(volatile *)0x4e00000c)
/*NAND FLASH DATA REGISTER*/
#define  NFDATA    (*(volatile *)0x4e000010)
/*NAND FLASH Main Data Area Register*/
#define  NFMECCD0  (*(volatile *)0x4e000014)
#define  NFMECCD1  (*(volatile *)0x4e000018)
/*NAND FLASH Spare Area ECC Register*/
#define  NFSECCD   (*(volatile *)0x4e00001c)
/*NFCON Status Register*/
#define  NFSTAT    (*(volatile *)0x4e000020)
/*NAND FLASH Other Status Register*/
#define NFESTAT0   (*(volatile *)0x4e000024)
#define NFESTAT1   (*(volatile *)0x4e000028)
#define NFMECC0    (*(volatile *)0x4e00002C)
#define NFMECC1    (*(volatile *)0x4e000030)
#define NFSECC	   (*(volatile *)0x4e000034)	
#define NFSBLK     (*(volatile *)0x4e000038)
#define NFEBLK	   (*(volatile *)0x4e00003c)

/*Clock Generator and Power Management Special Register*/
/*Lock Time Count Register(LockTime)*/
#define LOCKTIME   (*(volatile *)0x4c000000)
/*PLL control Register(MPLLCON & UPLLCON)*/
#define MPLLCON    (*(volatile *)0x4c000004)
#define UPLLCON    (*(volatile *)0x4c000008)
/*Clock Control Register(CLKCON)*/
#define CLKCON		(*(volatile *)0x4c00000c)
#define CLKSLOW		(*(volatile *)0x4c000010)
/*Clock Divider Control(CLKDIVN) Register*/
#define CLKDIVN		(*(volatile *)0x4c000014)
//Camera Clock Divider(CAMDIVN) Register
#define CAMDIVN		(*(volatile *)0x4c000018)







#endif
    																			
