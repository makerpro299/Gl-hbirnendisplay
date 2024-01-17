EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L power:+12V #PWR?
U 1 1 65A53551
P 6000 4000
F 0 "#PWR?" H 6000 3850 50  0001 C CNN
F 1 "+12V" H 6015 4173 50  0000 C CNN
F 2 "" H 6000 4000 50  0001 C CNN
F 3 "" H 6000 4000 50  0001 C CNN
	1    6000 4000
	1    0    0    -1  
$EndComp
$Comp
L power:-12V #PWR?
U 1 1 65A54386
P 6200 4000
F 0 "#PWR?" H 6200 4100 50  0001 C CNN
F 1 "-12V" H 6215 4173 50  0000 C CNN
F 2 "" H 6200 4000 50  0001 C CNN
F 3 "" H 6200 4000 50  0001 C CNN
	1    6200 4000
	1    0    0    -1  
$EndComp
$Comp
L Transistor_FET:IRLIZ44N T1
U 1 1 65A56E6A
P 6100 3250
F 0 "T1" H 6304 3296 50  0000 L CNN
F 1 "IRZF44N" H 6304 3205 50  0000 L CNN
F 2 "Package_TO_SOT_THT:TO-220F-3_Vertical" H 6350 3175 50  0001 L CIN
F 3 "http://www.irf.com/product-info/datasheets/data/irliz44n.pdf" H 6100 3250 50  0001 L CNN
	1    6100 3250
	0    -1   -1   0   
$EndComp
$Comp
L power:+12V #PWR?
U 1 1 65A5A26D
P 6000 2550
F 0 "#PWR?" H 6000 2400 50  0001 C CNN
F 1 "+12V" H 6015 2723 50  0000 C CNN
F 2 "" H 6000 2550 50  0001 C CNN
F 3 "" H 6000 2550 50  0001 C CNN
	1    6000 2550
	1    0    0    -1  
$EndComp
$Comp
L power:-12V #PWR?
U 1 1 65A5CC9B
P 6200 2550
F 0 "#PWR?" H 6200 2650 50  0001 C CNN
F 1 "-12V" H 6215 2723 50  0000 C CNN
F 2 "" H 6200 2550 50  0001 C CNN
F 3 "" H 6200 2550 50  0001 C CNN
	1    6200 2550
	1    0    0    -1  
$EndComp
Wire Wire Line
	6300 3150 6300 2700
Wire Wire Line
	6300 2700 6000 2700
Wire Wire Line
	6000 2700 6000 2550
$Comp
L Device:R_POT R1
U 1 1 65A5DC74
P 5550 3150
F 0 "R1" H 5481 3196 50  0000 R CNN
F 1 "100K" H 5481 3105 50  0000 R CNN
F 2 "" H 5550 3150 50  0001 C CNN
F 3 "~" H 5550 3150 50  0001 C CNN
	1    5550 3150
	0    -1   -1   0   
$EndComp
Wire Wire Line
	6200 2550 6200 2650
Wire Wire Line
	6200 2650 6350 2650
Wire Wire Line
	6350 2650 6350 3300
Wire Wire Line
	6350 3300 5700 3300
Wire Wire Line
	5400 3150 5400 4000
Wire Wire Line
	5400 4000 6000 4000
Wire Wire Line
	5700 3750 6350 3750
Wire Wire Line
	6350 3750 6350 4000
Wire Wire Line
	6350 4000 6200 4000
Wire Wire Line
	5700 3150 5700 3300
Connection ~ 5700 3300
Wire Wire Line
	5700 3300 5700 3750
Wire Wire Line
	5900 3150 5800 3150
Wire Wire Line
	5800 3150 5800 3000
Wire Wire Line
	5800 3000 5550 3000
$EndSCHEMATC
