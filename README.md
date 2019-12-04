

# Unit_2_Project_Lauricenia
This repository will be used to record the steps for creating the mars communication system program

![](20191106_121536.gif)


 
<details><summary>Planning</summary>

  Definition of the problem
  ==========================
  My client,the National Aeronautics and Space Administration (NASA) is a U.S. government agency responsible for science and technology related to air and space[1]. The agency launched a competition among the most famous programmers to create a communication system between Earth and Mars, and the Moon and Mars. The requirements outlined by the agency was a system that allows the users in the stations of Mars to communicate seamlessly using English with the two other stations. The keyboard input on each station must be limited to 2 push buttons and only 100W lights buzzers must be available. The current technology limitates the Mars station to communicate only in binary. 
  
  Proposed solution
  ===================
 Since the Mars station can only communicate using binary and the users must be able to send and recieve messages in english, its necessary to make a system that is able to execute the conversion between these two languages. The system should allow the user to enter the message in english then convert it to binary and send it to other station, in the same way, it should be able to receive the message in binary language and present it to the user in english. The user will be able to input the message by pressing the "OK" button, by which will choose the letter that appears in the serial monitor and the button "ERASE" by which can erase the last letter introduced in the message and by pressing both to insert space between the words. 

  Success criteria 
  ====================
  These are the measurable outcomes :
  1. Users can communicate effectively in english using 2 buttons; 
  1. System can send messages;
  1. System can receive messages; 
  1. System can convert messages from english to binary;
  1. System can convert messages from binary to english.
 
<p></details>
 

<details><summary>Design</summary>
  
  System diagram
  ==============
 ![](systemdiagram.jpg)
  Algorithms flow diagram
  ====================
 ![](flowchart1.jpg)
 ![](flowchart2.jpg)
  Testplan
  ============
<p></details>
 
 
<details><summary>Development</summary>
 
 ## 8 lcds
 This program forms numbers from 0 to 1 with the leds using boolean logic.
 
 ![](8 lcds.mov)
 
 ```.sh
 // Number one 
 bool  a = ( !A & !C ) | B | ( A & C );
 bool digitalWrite(out1, a);
 ```
 
 
 ## What is usability?

```
In software engineering, usability is the degree to which a software can be used by specified consumers to achieve quantified objectives with effectiveness, efficiency, and satisfaction in a quantified context of use.[2]
```

<p></details>
   
   
<details><summary>Evaluation</summary>
  
  Evidence of success criteria
  =========================
  
  
  Recommendations for the future 
  ====================


 <p></details>
   
  
 <details><summary>References</summary>
 [1]https://www.nasa.gov/audience/forstudents/5-8/features/nasa-knows/what-is-nasa-58.html  
 [2]“Usability.” Usability - Computer Science Wiki, computersciencewiki.org/index.php/Usability.
 <p></details> 
