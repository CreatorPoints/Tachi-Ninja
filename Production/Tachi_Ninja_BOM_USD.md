# Tachi Ninja — BOM (USD)

> **Pricing checked against current online distributor/manufacturer listings on 20 Sep 2026.**
> Prices are component-price references, not a shipping-inclusive build quote. Where the exact footprint/part in the PCB BOM was not uniquely identifiable from the listing, the closest matching part is explicitly marked.

| Item | Part / reference | Qty | Unit price (USD) | Extended (USD) | Source |
|---|---|---:|---:|---:|---|
| MCU | STM32F072C8T6, LQFP-48 | 1 | $2.5861 | $2.59 | LCSC |
| RGB LED | SK6812MINI-E | 63 | $0.0809 | $5.10 | LCSC, 5+ tier |
| Key diode | 1N4148, DO-35 | 61 | $0.0293 | $1.79 | LCSC, 20+ tier |
| USB-C | HCTL HC-TYPE-C-16P-01A | 1 | $0.0848 | $0.08 | LCSC, 5+ tier |
| USB ESD protection | ST USBLC6-2SC6 | 1 | $0.54 | $0.54 | DigiKey, 1+ |
| LDO | AMS1117-3.3, SOT-223 | 1 | $0.2199 | $0.22 | LCSC, 5+ tier |
| OLED | 0.91", 128×32, SSD1306, I²C | 1 | $2.2567 | $2.26 | LCSC, matching specification |
| Tactile button | Omron B3U-1000P | 2 | $0.1880 | $0.38 | LCSC, 5+ tier |
| Capacitor | 100 nF, 0805 | 6 | $0.0207 | $0.12 | LCSC, matching 0805/100 nF example |
| Resistor | 5.1 kΩ, 0603 | 2 | $0.0021 | $0.00 | LCSC, matching 0603/5.1 kΩ example |
| Resistor | 10 kΩ, 0603 | 1 | $0.0027 | $0.00 | LCSC, matching 0603/10 kΩ example |
| MX switches | Cherry MX family | 61 | ~$0.3115* | ~$19.00* | Cherry official retail reference |
| PCB | Custom PCB | 1 | **Not included** | **Not included** | Your fabrication quote |
| Enclosure | Custom 3D print | 1 | **Not included** | **Not included** | Depends on filament/print cost |
| Keycaps | Custom 3D-printed | 61 | **Not included** | **Not included** | Depends on material/print |

## Component subtotal

**~$32.09**

\* Cherry's official store currently lists several MX switch products at **$19.00 per listed product price**, but the page does not establish that this is a single-switch price. Therefore the `$19.00` figure should be treated as a retail reference for a switch listing, **not** as a verified 61-switch purchase cost. The subtotal therefore includes a conservative $19 reference for the switch line only and should not be interpreted as a final purchasing quote.

## Verified price notes

- STM32F072C8T6: LCSC lists **$2.5861 at 1+**. 
- SK6812MINI-E: LCSC lists **$0.0809 at 5+**, falling with volume.
- 1N4148 DO-35: LCSC lists **$0.0293 at 20+**.
- HCTL HC-TYPE-C-16P-01A: LCSC lists **$0.0848 at 5+**.
- USBLC6-2SC6: DigiKey lists **$0.54 at quantity 1**.
- AMS1117-3.3: LCSC lists **$0.2199 at 5+**.
- 0.91-inch 128×32 SSD1306 I²C OLED: LCSC lists **$2.2567 at 1+**.
- Omron B3U-1000P: LCSC lists **$0.188 at 5+**.
- 100 nF 0805 capacitor example: LCSC lists **$0.0207 at 20+**.
- 5.1 kΩ and 10 kΩ 0603 resistor examples are listed by LCSC at fractions of a cent at volume.

## Sources

- LCSC — STM32F072C8T6: https://www.lcsc.com/product-detail/ST-Microelectronics_STMicroelectronics_STM32F072C8T6_STM32F072C8T6_C80488.html
- LCSC — SK6812MINI-E: https://www.lcsc.com/product-image/C5149201.html
- LCSC — 1N4148: https://www.lcsc.com/product-detail/C258182.html
- LCSC — HCTL HC-TYPE-C-16P-01A: https://www.lcsc.com/product-image/C2894897.html
- DigiKey — USBLC6-2SC6: https://www.digikey.com/en/products/detail/stmicroelectronics/USBLC6-2SC6/1040559
- LCSC — AMS1117-3.3: https://www.lcsc.com/product-detail/Voltage-Regulators-Linear-Low-Drop-Out-LDO-Regulators_span-style-background-color-ff0-Advanced-span-Monolithic-Systems-AMS1117-3-3_C6186.html
- LCSC — 0.91-inch SSD1306 OLED: https://www.lcsc.com/product-detail/oled-display_hs-hs91l02w2c01_C5248081.html
- LCSC — Omron B3U-1000P: https://www.lcsc.com/product-detail/C231329.html
- LCSC — 100 nF 0805 capacitor reference: https://www.lcsc.com/product-detail/Multilayer-Ceramic-Capacitors-MLCC-SMD-SMT_KEMET-C0805F104K5RACAUTO_C141162.html
- LCSC — resistor pricing category: https://www.lcsc.com/category/1199.html
- Cherry XTRFY — Cherry MX switch retail listings: https://cherryxtrfy.com/keyboard-switches
