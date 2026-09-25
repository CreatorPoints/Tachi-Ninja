# Tachi Ninja V2
A 60% Silent Linear mechanical keyboard that has per key RGB lighting and a display for pure asthetics! Made so that I can advance more in this fun cad pathway! [Now Hot-Swappable!]

---

## What was fun to make and what wasnt:
Well, it was overall a great project, I liked the most is the designing the pcb and making the case of this keyboard. But the ABSOLUTE brutal part was manually tracing all 424 pads :skull:

---

## Why did I make this?
I made it because I wanted a actually good keyboard, so instead of buying from online I decided to make my own. Advantages are I get to control how it would be and ofcource the flex :cool:

---

## Whats this "V2" Thingy?
So, when this project was submitted for forge, the reviewer returned the project for multiple reasons, one of it being incomplete PCBA, so, I improvised with something much better. The table would be the best:
|V1|V2|
|--|--|
|Permanent MX Switches|Kailh MX Hot Swappable sockets|
|Very crampy keycaps|Follows universal 19.05mm rule for keyboards|
|More compact, less polished|Kinda less compact, more polished|

## Need this? Here!
So, you need this same keyboard? NO PROBLEM! Its open-source!
1) Download this repo [assuming you know how to... just run git clone in your terminal]
2) Order the PCB - Preferebly from [JLCPCB](jlcpcb.com)
3) Gather the rest of the parts. Check [BOM](./BOM.md) 
4) Case files are in /CAD. Its upto you how to print [#Printing-Legion on slack].
5) Once your assembled PCB arrives, hand-solder the hot-swap sockets and OLED into the board (these are excluded from PCBA since they're through-hole/socketed). Press-fit switches into the hot-swap sockets and mount the PCB into the case and snap on keycaps.
6) Flash the firmware, hold both the BOOT and NSRT button when trning on, it turns the stm32 to bootloader mode, drop the .h and json files and you are good to go!
7) Plug in via USB-C, confirm all 61 keys register, RGB lights up per-key, and the OLED display turns on! Yippe!

---

## Components used:
The following stuffs were used... Very hacky :)
- STM32F072C8Tx
- 1N4148 (x61)
- Kailh MX Hot Swappable Sockets (x61)
- SK6812MINI-E (x63)
- Resistors (x3)
- Capacitors (x6)
- Smol Switches (x2) - For boot & NRST purposes
- USB C 2.0 Receptable 16P
- AMS1117-3.3V
- 0.91 Inch I2C OLED Screen
- USBLC6-2SC6

---
## BOM

| Item | Link | Price | Shipping Cost |
| --- | --- | --- | --- |
| Switches (70x) | [HMX Taro Silent Linear](https://stackskb.com/store/hmx-taro-silent-linear-switch-pack-of-10/) | ₹2,625.00 / $27.39 | Free |
| Stabilizers | [Durock V2 Screw-in Stabilizers](https://stackskb.com/store/durock-clear-screw-in-stabilizers-v2/?attribute_combination=4%2B1+Set&attribute_spacebar-size=6.25U) | ₹1,595.00 / $16.65 | Free |
| Keycaps | [dagaladoo Shine Through Keycaps](https://www.amazon.in/gp/product/B0DJH6L159/ref=ox_sc_act_title_1?smid=A2BWJVKSWP7TR2) | ₹2,500.00 / $26.12 | $5.00 |
| Hot Swap Sockets (70x) | [Gateron Sockets](https://stackskb.com/store/gateron-hotswap-sockets/) | ₹610.00 / $6.37 | Free |
| Solder Wire | [Lead-free Solder](https://www.amazon.in/SCHOFIC-Solder-Sn99-Ag0-3-Cu0-7-Weight-0-22lb/dp/B078C7SMKY/ref=sr_1_10?sr=8-10) | ₹385.00 / $4.02 | Free |
| PCB & Top Assembly (2 boards) | [JLCPCB](https://jlcpcb.com) | $53.21 | Included |
| Loose SMD Parts (LEDs, Diodes, CC Resistors) | [LCSC](https://www.lcsc.com) | $9.03 *(parts + handling)* | $42.03 |

Subtotal: $189.82  
Estimated Import Customs (20% – 45% on JLCPCB + LCSC):** ~$21.00 – $47.00 (~$36.50 mid)  
Total Estimated Request: ~$226.30

### For the full itemized breakdown, footprints, and part numbers, check:
[BOM.md](BOM.md)

---

## Images!
![A highly detailed PCB](images/pcb.png)
### Wait, its V1
![What a good case!](images/keyboard.png)
### From here V2 Development begins
![No Violations!](images/0error.png)
![a render](images/Case-nopcb-top.png)
![another render](images/case-top.png)
![i dont know](images/modelmaking.png)
![pcb!](images/pcbFront.png)


