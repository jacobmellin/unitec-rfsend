# unitec-rfsend

A simple WiringPi based tool to send the codes required to control self learning wireless electrical outlets, operating on the 433 Mhz band. I wrote it to control wireless outlets from a Raspberry Pi. The tool works with "Unitec" branded outlets (Type: 48110, Receiver: 55006x10) that can be found currently in "Globus" hardware stores in Germany, although my guess is that they are available under a number of different brands and in different countries. Please let me know if it works with your specific brand, and I will update the README accordingly.

## Usage

Unfortunately I was not able to find a pattern in the codes used, so the tool just works with a sequence of binary digits indicating HIGH/LOW signals to be sent. 

To switch on socket A, run the following command:

```
unitec-rfsend 1000101111011010001100000
```

You may use spaces in the code for better readability:

```
unitec-rfsend 1000 1011 1101 1010 0011 0000 0
```

See below for a number of possible codes.


## Model & Signal Data

Type: 48110  
Receiver: 55006x10

```
1 = 975us HIGH, 475us LOW  
0 = 475us HIGH, 975us LOW
```

Delay between datagrams: 1300us

## Codes for controlling the four included outlets:

```
A ON  : 1000 1011 1101 1010 0011 0000 0  
A OFF : 1000 1111 1110 0100 0001 0000 0
B ON  : 1000 1101 1100 0010 0111 0100 0
B OFF : 1000 0010 0011 1111 1010 0100 0
C ON  : 1000 1101 1100 0010 0111 1100 0
C OFF : 1000 0010 0011 1111 1010 1100 0
D ON  : 1000 0010 0011 1111 1010 0010 0  
D OFF : 1000 1101 1100 0010 0111 0010 0
```
