# Foundation of computer science

---

## 0b0001 Computer Model

----

### Data processor
What is Data processor:
| in this definition, a computer accepts input data, processes the data, and create output data

----

### Turing Model

Turing proposed that all kinds of computation could be performed by a special
kind of a machine. He based the model on the actions that people perform when involved in computation.

This model add an extras components to specific computer: ***program***,
***program*** is a set of instructions that tells the computer how to do with the computer.

----

two factor of the output data:
* input data
* program

----

**universal turing machine**
if appropriated program is provided, the universal turing machine is capable of computing anything that is computable.

----

### Von neaumann Model
around 1944-1945, Von Neumann proposed that ***programs and data should store together*** since they are logically the same.

----

#### Four subsystems
- Memory: Storage area
- Arithmetic logic unit: Calculation & logical operation area
- Control unit: control operations of subsystems
- Input/Output unit: The input subsystem accepts input data and the program from outside the computer; the output subsystem sends the result of the processing to the outside.

----

#### Sequential execution of instruction
program in V.N model is made of finite number of instruction, the control unit fetch the instrution, decode it then execute it.

----

### Computer Components
- Hardware
- Data
    - Storing
    - Organizing
- Software
    - storing program
    - instructions
    - Algorithms
    - Languages
    - Software engineering
    - Operating System

----

### Computer History
#### Mechanical machines
* **Pascaline**: a mechanical machine calculator for addition and subtraction
* **Leibniz Wheel**: a machanical machine that can do +-*/
* **Jacquard loom**: a machine use punched cards to control the raising of the warp threads in the manufacture of textiles.

----

* **Difference machine**: usage same to its name
* **Analytical Engine**:a machine that also do calculation, but it is important that its components are similar to modern computer components: a mill(=ALU), a store(=memory), an operator(=Control Unit), and output(=I/O).

----

#### Modern Computer:
below are computer that programs are not stored in memory (not based on V.N Model)
- ABC: a computer that desined to solve linear equation.
- ZI: a computer designed for general purpose.
- MARK I
- ***Coloss***: Turingc invented, designed to break German Enigma code
- ENIAC: the first all electronic computer, for general-purpose

based on V.N model: ***EDVAC & EDSAC***

----

#### Computer Generation
| G | type | Description |Price|
|:---:|:---:|---|---|
|1|vaccumm tube|for commercial use, only computer specialist can use|Extreme High|
|2|transistor|FORTRAN, COBOL|affordable to small Biz|

----

| G | type | Description |Price|
|:---:|:---:|---|---|
|3|integreted Circuit|Minicomputer, Pakage, software industry has born|low|
|4|I.C.|MicroComputer, desktop computer,computer network|low|
|5|I.C.|laptop, palmtop computers, multimedia, virtual reality|low|

---

## 0b0002 Number System

----

喵

----

---

## Data Storage-Storing numbers
- integers
    - unsigned
    - Sign& magnitude
    - two's complement 
- reals
    - IEEE 754
    - Sign, Exponent, Mantissa

----

### Overflow& Underflow
# 0b0100. Operations on Data
## Logic operation
### AND OR NOT XOR
## Shift operation
1. **Logical shift operation**: applied on patterns that ***does not represent a signed number***
    - **simple shift**:
        - *simple left shift*: the leftmost is lost and a 0 is added to the right
        - *simple right shift*: the rightmost is lost and a 0 is added to the left
    - **Circulur shift(/rotate operation)**:
        - *circulur left shift*: shifts each bit one position to the left, and the leftmost bit circulates and become the rightmost bit.
        - *circulur right shift*:shifts each bit one position to the right, and the righttmost bit circulates and become the leftmost bit.
2. **Arithmetic shift operations**: ***assume that the bit pattern is a signed number in ==two's complement format==***, these operations should not changed the signed, so the signed might be copied in the operations.
    - **Arithmetic right shift**: is used to divided an integer by 2, this operation retains the sign bit, but also copies it into the next right bit, so the signed is preserved. 
    - **Arithmetic left shift**: is used to multiply an integer by 2, discards the sign bit and accepts the bit to the left of the sign bit as the sign, if the sign is same as the previous one, the operation is successful, otherwise an overflow or underflow is occured.
# 0b0101. Computer Organization
# 0b0110. Computer Network
## five layer architecture:
from high layer to low layer:
* Application Layer: provides service to user
    * Standard Client-Server app.
        - www, World wide website: a multimedia Internet service that allows users to traverse the internet by moving from documents to documents via links.
        - HTTP, HyperText Transport Protocol: a protocol that is used to retrieved web page on the internet (servers use 80 port to receive requests from user, then send the response to user's temperary port)
        - FTP, File Transport Protocol : 
        - SSH, secure shell
        - email
        - DNS, Domain Name Server
        - P2P, peer to peer
- Transport Layer: 
- Network Layer
- Data Link Layer
- Physical Layer


