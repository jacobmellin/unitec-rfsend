# RF signal for self lerning Unitec/Intertek Outlets

## Model & Signal Data

Type: 48110  
Receiver: 55006x10

1 = 1000us HIGH, 500us LOW  
0 = 500us HIGH, 1000us LOW

Delay between datagrams: 1300us

## Codes for unitec-rfsend

  A ON  : 1000 1011 1101 1010 0011 0000 0  
  A OFF : 1000 1111 1110 0100 0001 0000 0

  B ON  : 1000 1101 1100 0010 0111 0100 0
  B OFF : 1000 0010 0011 1111 1010 0100 0

  C ON  : 1000 1101 1100 0010 0111 1100 0
  C OFF : 1000 0010 0011 1111 1010 1100 0

  D ON  : 1000 0010 0011 1111 1010 0010 0  
  D OFF : 1000 1101 1100 0010 0111 0010 0