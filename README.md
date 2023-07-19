# ShellcodeGenerator

## Shellcode generation process in general

```
https://www.ired.team/offensive-security/code-injection-process-injection/writing-and-compiling-shellcode-in-c
```

Run the assembly generation command from the Developer PowerShell, not the normal one. This can easily be done from the Visual Studio's Terminal.

## Some assembly Hello World Tutorial

```
https://www.youtube.com/watch?v=HgEGAaYdABA&ab_channel=JohnHammond
```

## World's Smallest Windows App in x86 ASM by Dave's Garage

 - [ ] Video description: [https://www.youtube.com/watch?v=b0zxIfJJLAY&ab_channel=Dave%27sGarage](https://www.youtube.com/watch?v=b0zxIfJJLAY&ab_channel=Dave%27sGarage)
 - [ ] Code stored here: [https://pastebin.com/Pmvr4r1S](https://pastebin.com/Pmvr4r1S)
 - [ ] MASM32 is required: [https://masm32.com/](https://masm32.com/)

MASM32 is a project that adds "header files" to the assembly (I think).

Compile in a Developer command prompt with:
```
ml /coff HelloAssembly.asm
```
