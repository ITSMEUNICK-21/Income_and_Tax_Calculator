# Project Report
         This project is helpful for small scale restaurant owners, who can't afford their budget on billing software. 
         It is available 24*7 and is feasible to bussiness owners.

## Features of the project
         This project's key features are :
         * You can get the tax payable based on your taxable income.
         * You can select age-based distinction and pay your tax payable accordingly.
         * You can see and compare the tax payables under Old Regime and New Regime of Income Tax.

## Identifying the Requirements
     Technologies and Tools Used:
     
         * Development Tool: Github Website.
         * IDE Used : Virtual Studio Code.
         * Web browser: Mozilla Firefox.
         * Languages Used: C Language, Makefile.
         * Compiler : GCC Compiler.
         * Operating System : Linux OS, Windows OS.

## Highlevel Requirements
|HLR_ID|Description|Status|
|:--:|:--:|:--:|
|HLR_1|This project helps to get tax payable on your taxable income|Implemented|
|HLR_2|This project allows to select age based distinction on tax payable|Implemented|
|HLR_3|This project allows to compare tax payable under Old Regime and New Regime of Income Tax|Implemented|
|HLR_4|This project allows to include Allowances|Future|
|HLR_5|This project allows to include Deductions|Future|

    
## Lowlevel Requirements
|HLR_ID|LLR_ID|Description|Status|
|:--:|:--:|:--:|:--:|
|HLR_1|LLR_01|Selects tax rates applicable according to the range of taxable income|Implemented|
|HLR_2|LLR_01|Tax payable for people with age less than 60|Implemented|
||LLR_02|Tax payable for people with age more than 60 but less than 80|Implemented|
||LLR_03|Tax payable for people with age more than 80|Implemented|
|HLR_3|LLR_01|Tax payable under Old Regime|Implemented|
||LLR_02|Tax payable under New Regime|Implemented|

## Behavioral Diagrams

* **Usecase Diagram**

![Usecase_Diagram](https://github.com/ITSMEUNICK-21/M1_Income_and_Tax_Calculator/blob/main/2_Architecture/Usecase_Diagrams.drawio%20(1).png)

* **Flowchart**

![Flowchart](https://github.com/ITSMEUNICK-21/M1_Income_and_Tax_Calculator/blob/main/2_Architecture/Flowchart.drawio%20(1).png)





## Structural Diagrams

* **Object Diagram**

![Object_Diagram](https://github.com/ITSMEUNICK-21/M1_Income_and_Tax_Calculator/blob/main/2_Architecture/Object_Diagram_new.drawio.png)

* **Packet Diagram**

![Packet_Diagram](https://github.com/ITSMEUNICK-21/M1_Income_and_Tax_Calculator/blob/main/2_Architecture/Packet_Diagram.drawio.png)

## TEST PLAN:

* **Table no : High level test plan**

|HLT_ID|Description|Exp I/P|Exp O/P|Actual O/P|Type of Test|
|:--:|:--:|:--:|:--:|:--:|:--:|
|HLT_1|Old Regime age less than 60|600000|32500|32500|Requirements based|
|HLT_2|Old Regime age more than 60 less than 80|600000|30000|30000|Requirements based|
|HLT_3|Old Regime age more than 80|600000|20000|20000|Requirements based|
|HLT_4|New Regime all ages|600000|22500|22500|Requirements based|


* **Table no : Low level test plan**

|HLT_ID|LLT_ID|Description|Exp I/P|Exp O/P|Actual O/P|Type of Test|
|:--:|:--:|:--:|:--:|:--:|:--:|:--:|
|HLT_1|LLT_1|Old Regime <60 2.5-5 lpa|400000|7500|7500|Requirements based|
||LLT_2|Old Regime <60 5-10 lpa|600000|32500|32500|Requirements based|
||LLT_3|Old Regime <60 >10 lpa|1100000|142500|142500|Requirements based|
|HLT_2|LLT_1|Old Regime >60 and <80 3-5 lpa|400000|5000|5000|Requirements based|
||LLT_2|Old Regime >60 and <80 5-10 lpa|600000|30000|30000|Requirements based|
||LLT_3|Old Regime >60 and <80 >10 lpa|1100000|140000|140000|Requirements based|
|HLT_3|LLT_1|Old Regime >80 5-10 lpa|600000|20000|20000|Requirements based|
||LLT_2|Old Regime >80 >10 lpa|1100000|130000|130000|Requirements based|
|HLT_4|LLT_1|New Regime 2.5-5 lpa|400000|7500|7500|Requirements based|
||LLT_2|New Regime 5-7.5 lpa|600000|22500|22500|Requirements based|
||LLT_3|New Regime 7.5-10 lpa|800000|45000|45000|Requirements based|
||LLT_4|New Regime 10-12.5 lpa|1100000|95000|95000|Requirements based|
||LLT_5|New Regime 12.5-15 lpa|1300000|137500|137500|Requirements based|
||LLT_6|New Regime >15 lpa|1600000|217500|217500|Requirements based|

## SWOT Analysis
![](https://github.com/ITSMEUNICK-21/M1_Income_and_Tax_Calculator/blob/main/6_ImagesAndVideos/SWOT%20Analysis.png)            

## Implementation
    Instructions to RUN program :
    
        1. Clone my repository into your system.
        2. You should go to 3_Implementation/ folder.
        3. Run "make Run" command in your terminal for execution of program.
        
## Author

- [@ITSMEUNICK-21](https://www.github.com/ITSMEUNICK-21)
