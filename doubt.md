<details close>
<summary>Is Kernal mode same as Previlaged mode and User mode - Unprevilaged mode?</summary>
<p>Yes, its just terminology</p>
</details>
<br>

<details close>
<summary>Who copies Boot ROM to the 0th location of Memory? Memory is volatile so someone should do it.</summary>
<p> answer was discussed in the xos google group.</br>
<a href="https://groups.google.com/g/xos-users/c/cnQkHeGSafY/m/ebEFi2PmAgAJ"> grp discussion </a>
</br>
<img src="img/rom_doubt.png">
</p>
</details>
<br>

<details close>
<summary>In stage 3 for print statement only 13 characters got printed. Why?</summary>
<p>This is an abstraction that is hidden from us.</p>
</details>
<br>

<details open>
<summary>What is the size of one char here? (most probably 8)</summary>
<p><h1>ask prof</h1></p>
</details>
<br>

<details open>
<summary>In stage 1: its written one word is 16 characters long. But in stage 3 one string can only hold 13 characters. Why?</summary>
<p><h1>ask prof</h1></p>
</details>
<br>

<details close>
<summary>MOV [1500], R0 in unprevilaged mode will set dirty bit to 1, since  the mem location is modified. But will the reference bit be made to 1. aka Is modification a subset of referencing?</summary>
<p>yes, (i think)</p>
</details>
<br>

<details close>
<summary>
When we are in the middle of a user program. And when an interrupt gets hit.
The IP value will be pushed into the stack, then SP++.
IP will be changed to the destination where the interrupt code is present.
<br/>
So when we are in the interrupt's code. The SP will be storing the logical address value that we already kept.
Does this mean that we can't use the stack while writing the interrupt code? Right?
</summary>
<p>yes, (i think)
<br/>
or else we will have to store SP value in some register and then make the value the old one before doing ireturn.
<br/>
Kernel maintains a new thing called kernal stack - stage 9 stuff
</p>
</details>
<br>

<details open>
<summary> What is the use of Base pointer (BP) ? </summary>
<p><h1>ask</h1></p>
</details>
<br>

<details open>
<summary>In stage 9 while modifying the timer interrup code. I was not able to use R16 to R19 registes.
But in theory in Kernal moe R16 to R19 should be available. Why was I not able to use them?</summary>
<p><h1>ask</h1></p>
</details>
<br>

<details colse>
<summary>Will the valuse inside xsm disk be saved even after my unix system is rebooted.</summary>
<p>Yes, I just checked what are the contents of my disk using the copy xfs-interface command. And my old code is still in it (The ones that I loaded in my last coding session).</p>
</details>
<br>

<details close>
<summary>When we execute library code will the register values be disturbed?</summary>
<p>Yes, If you need proof go and read the library.lib file inside myexpos/expl/ directory</p>
</details>
<br>


<details open>
<summary>In stage 13 we are asked to initialise the user page number of IDLE process as 82. But in stage 12 we initialised it to page number 81. Is there any particular reason to do that?</summary>
<p><h1>ask prof</h1></p>
</details>
<br>
