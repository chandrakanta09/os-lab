<ol>
	<li>
		<!-- 1 -->
		<details close>
		<summary>Is Kernal mode same as Previlaged mode and User mode - Unprevilaged mode?</summary>
		<p>Yes, its just terminology</p>
		</details>
	</li>
	<li>
		<!-- 2 -->
		<details close>
		<summary>Who copies Boot ROM to the 0th location of Memory? Memory is volatile so someone should do it.</summary>
		<p> answer was discussed in the xos google group.</br>
		<a href="https://groups.google.com/g/xos-users/c/cnQkHeGSafY/m/ebEFi2PmAgAJ"> grp discussion </a>
		</br>
		<img src="img/rom_doubt.png">
		</p>
		</details>
	</li>
	<li>
		<!-- 3 -->
		<details close>
		<summary>In stage 3 for print statement only 13 characters got printed. Why?</summary>
		<p>This is an abstraction that is hidden from us.</p>
		</details>
	</li>
	<li>
		<!-- 4 -->
		<details close>
		<summary>What is the size of one char here? (most probably 8)</summary>
		<p>The following is only my guess. ask profressior for conformation. The xsm machine's word length is 13characters. Reason for believing the last statement is - when we try to print some big string stored in a general purpose register the string gets truncated after 13 chars. Then now in the xfs-disk the word size is 16 characters This can be seen in stage 2: understanding Filsystem, when we dump the data stored inside a file.</p>
		</details>
	</li>
	<li>
		<!-- 5 -->
		<details open>
		<summary>In stage 1: its written one word is 16 characters long. But in stage 3 one string can only hold 13 characters. Why?</summary>
		<p><b>ask prof</b></p>
		</details>
	</li>
	<li>
		<!-- 6 -->
		<details close>
		<summary>MOV [1500], R0 in unprevilaged mode will set dirty bit to 1, since  the mem location is modified. But will the reference bit be made to 1. aka Is modification a subset of referencing?</summary>
		<p>yes, (i think)</p>
		</details>
	</li>
	<li>
		<!-- 7 -->
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
	</li>
	<li>
		<!-- 8 -->
		<details open>
		<summary> What is the use of Base pointer (BP) ? </summary>
		<p><b>ask</b></p>
		</details>
	</li>
	<li>
		<!-- 9 -->
		<details open>
		<summary>In stage 9 while modifying the timer interrup code. I was not able to use R16 to R19 registes.
		But in theory in Kernal moe R16 to R19 should be available. Why was I not able to use them?</summary>
		<p><b>ask</b></p>
		</details>
	</li>
	<li>
		<!-- 10 -->
		<details colse>
		<summary>Will the valuse inside xsm disk be saved even after my unix system is rebooted.</summary>
		<p>Yes, I just checked what are the contents of my disk using the copy xfs-interface command. And my old code is still in it (The ones that I loaded in my last coding session).</p>
		</details>
	</li>
	<li>
		<!-- 11 -->
		<details close>
		<summary>When we execute library code will the register values be disturbed?</summary>
		<p>Yes, If you need proof go and read the library.lib file inside myexpos/expl/ directory</p>
		</details>
	</li>
	<li>
		<!-- 12 -->
		<details close>
		<summary>In stage 13 we are asked to initialise the user page number of IDLE process as 82. But in stage 12 we initialised it to page number 81. Is there any particular reason to do that?</summary>
		<p>read properly it was already 82 only. You messed up Stack page number with user area page number</p>
		</details>
	</li>
	<li>
		<!-- 13 -->
		<details close>
		<summary>Caution while using spl alias command</summary>
		<p> Alias is not a variable so if you modify the registers directly (for example: after restore instruction) dont use the alias name because the values would have been overrided. </p>
		</details>
	</li>
	<li>
		<!-- 14 -->
		<details close>
		<summary>Is busy looping same as polling technique?</summary>
		<p>Polling is when a process polls for lets say some data and does something in the mean time. While In busy loop the program just waits without doing anything in between checks.</p>
		</details>
	</li>
	<li>
		<!-- 15 -->
		<details open>
		<summary>When we use the exposcall() to call a syscall (lets say int7 is called). In int7 code we change the values of registers. So before the call is made will expl compiler save all reg values into the stack?</summary>
		<p><b>ask</b></p>
		</details>
	</li>
	<li>
		<!-- 16 -->
		<details open>
		<summary>Why is there a difference in interrupt number and system call number? like what is the use of keeping it differen?</summary>
		<p><b>ask</b> My guess: we implement differnt syscalls in one interrupt's code sooooo we need different numberings.</p>
		</details>
	</li>
</ol>
