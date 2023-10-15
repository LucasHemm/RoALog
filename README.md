# RoALog

25/08:
Idag er vi blevet introduceret til forskellige elektroniske dele, som vi skal bruge til et lyskryds-projekt. Deruover har vi arbejdet videre med C++, hvor vi er blevet klogere på klasser.
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
28/08:
Idag har jeg arbejdet og løst trafiklys opgaven. Først blev deisgnet af hvordan det opgaven skulle fungere lavet. Herefter blev det kodet. Opgaven var okay at løse men tog det lidt lige at sætte sig ind i c++. Her var det lidt udfordringer ift. hvordan eks constructor syntaks forgik i c++, og hvordan arrays lige fungerede. Men alt i alt en success.
Projektet kan ses under trafiklys mappen. Se mappe med kode og video her: https://github.com/LucasHemm/RoALog/tree/main/TrafikLys
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
29/08:
Idag lærte vi omkring forskellige typer af input som eksempelvis knapper. Derudover blev vi stillet en opgave hvor vi frit fik lov at vælge en form for input. Her valgte min gruppe og jeg at tage en lyssensor som kunne se hvilke farver det hvar ud for sensoren. Derfra lavede vi en klasse hvor man kunne bruge sådan en lyssensor som gav et RGB output hvilket så kan bruges til at findee ud af hvilken farve den ser.
Projektet kan ses under Lyssensor mappen. Se mappe med kode og video her: https://github.com/LucasHemm/RoALog/tree/main/LightSensor
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
31/08:
Idag lærte vi omkring opsætning af wifi hotspot med en nodemcu. Her lavede vi først et hotspot og løste derefter en opgave hvor man skulle kunne styre nogle dioder fra computeren henover et lokalt wifi hotspot.
Dette gik relativt simpelt, og vi fik det til at virke ved at kunne tænde for hver enkelt diode og en knap som kunne slukke dem. Se mappe med kode og video her: https://github.com/LucasHemm/RoALog/tree/main/WiFiExample
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
05/09:
I dag har vi lært om 3D print. Her er vi blevet introduceret til en ny 3D Printer hvor vi har set den kører og lidt om hvordan den fungere. Derudover er vi gået igang med at bruge openSCAD og JavaCSG. Dette er et program til java hvor man kan skrive java kode som så kan konverteres til openSCAD som kan bruges til at lave 3D modeller som kan printes.
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
07/09:
I dag har vi arbejdet videre med JavaCSG. Vi har arbejdet på at bygge en beholder til en nodeMCU og derefefter selv arbejdet på en beholder til den større version 3 nodeMCU. Deruvoer er vi blevet introduceret til prusa som bruges til at slcie og gøre 3d print klar.
-

![image](https://github.com/LucasHemm/RoALog/assets/99349701/15d8b589-4c43-4017-a84f-87a75b41e722)

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
12/09:
Idag er vi blevet introduceret for det fælles semester projekt, nemlig tog projektet. Her skal vi 3D printe en masse dele som skinner,click system, og selve togene. Idag gik vi igang med at udarbejde click systemet. Her brugte vi tid på at i grupper komme med ideer til forskellige click systemer. Til sidst endte vi op med et system som meget har lignet et Tobias tidligere har arbejdet med, som fungere ved at det clicker sammen.
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
15/09:
Idag har vi fortsat arbejdet med Click systemet. Der er blevet lavet kode til click systemet, her der det blevet testet igennem flere iterationer hvor vi til sidst nåede frem til det helt rigtige. Derudover lavede vi også en større model af click systemet, og en rund version af click systemet som er vigtig til når det skal bruges til skinner der skal kunne skifte spor og dreje.
![Forskellige_clickSystemer](https://github.com/LucasHemm/RoALog/assets/99349701/cb54552b-86ad-41d7-abb6-9c8c98c344ac)
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
19/09:
Idag har vi arbejdet videre med clicksystemet som er blevet navngivet ClickConnect. Fokus var på at gøre koden pænere ved bl.a. at lave et interface som kan blive brugt i de forskellige klasser.
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
22/09:
Idag er vi blevet delt op i grupper og den indledende brainstorming er gået igang, vi er gået frem og tilbage ift ideer og er gået sammen med en anden gruppe (isak helena og jamie). Oprindeligt var planene at lave en ølk station til tog systemet men efter klassen er gået væk fra tog ideen, er tiden brugt på brainstorming som indtil videre har at gøre med en automatisk vinophælder som bruger en fugtighedsmåler til nodeMCU'en.
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
26/09:
Idag fortsatte arbejdet på vores projekt. Vi fik gået igang med arbejdet med at 3D printe dele til vores vinophælder. Til vores NodeMCU blev der lavet en holder som gør brug af clickconnect systemet som vi så kan bruge til at sætte på konstruktionen som skal sidde på papvienen og styrer ophældningen. Dette blev gjort i javaCSG. Derudover blev der arbejdet og designet med hvordan det færdige produkt skulle se ud. Vi talte om flere forskellige modeller og endte på en som gør brug af kun 1 servo motor. Vedhæftet sketch er tegnet af Isak.
![image](https://github.com/LucasHemm/RoALog/assets/99349701/4adc6742-2485-4034-9764-861ffb98e527)
![image](https://github.com/LucasHemm/RoALog/assets/99349701/8c3b4453-faa7-487e-8d91-747e9ca8f615)
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
29/09:
Idag arbejdede vi videre på projektet. Der bkev bl.a startet på programmeringen for hvordan fugtighedsmåleren skulle fungere og hvordan vi fik data om der var vådt til når koppen er fyldt. Derudover blev der 3d printet en masse. Både clickere fra clickConnect systemet til at sætte ting sammen blev printet, men også den store kopholder og den ene af 2 dele til at holde fugtighedsmåleren over koppen blev printet. Alle tingene blev printet rigtig fint.
![Holder](https://github.com/LucasHemm/RoALog/assets/99349701/d139ca3c-b008-44eb-998b-9169e09ae55e)
![holderMedKop](https://github.com/LucasHemm/RoALog/assets/99349701/3026679a-85c9-40da-82ce-424710eb07b1)
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
3/10:
Idag fortsatte arbejdet med projektet. Vi fik printet første version af anden del af holderen til at holde fugtighedsmåleren. Derudover fortsatte arbejdet med at få styr på WIFI delen af koden og hvordan krogen til at sidde på tutten af pap vinen kodes i javaCSG.
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
6/10:
Idag arbejde vi videre med koden og holder til fugtighedshåleren. Designet fra sidst var en godt version 1 som egentlig holdte den okay men manglede en vigtig komponent i at med der ikke var en væg for enden som sikrede at måleren ikke kunne falde ned i vinen. Efter vi fik printet den med en væg var vi egentlig tilfredse med selve holder delen, men efter have sat den sammen med forbinderen til kopholderen var den for høj, så derfor lavede vi en version 3 hvor at clickConnecteren blev sat i den anden ende så holderen lige sad lidt lavere så den perfekt kunne ramme vinen i koppen så den ved hvornår den skal stoppe med at hælde vin.
-
Vi arbejdede også på første iteration af den spole som skal styre hvor meget vin der skal komme ud. Dog har vi en del ændringer til en version 2 som der skal arbejdes på næste gang.
![387334798_1057010215469474_3241442040886679488_n](https://github.com/LucasHemm/RoALog/assets/99349701/afcf10c3-ff5a-484f-8bf7-b11fbb75fe7c)
![387328252_1675678926276597_5204718995128764411_n](https://github.com/LucasHemm/RoALog/assets/99349701/c697d9d5-7de0-4746-a02b-518ad52a10c9)
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
10/10:
Idag gik jeg igang med at arbejde på en ny spole. Efter en snak internt og med tobias havde den nogle mangler som der gjorde at den blev designet ret anderledes. 
Nu minder den i stedet mere om et hjul hvilket gør den langt mere stabil og gør at den skal bruge mindre kraft for at dreje rundt end version 1.
![387329004_671514518280927_809669707736760353_n](https://github.com/LucasHemm/RoALog/assets/99349701/e01061b2-5afc-4c5a-b6e6-a5c57ef7d96e)
![387556192_6646898755427334_2196011522733171549_n](https://github.com/LucasHemm/RoALog/assets/99349701/0d6512e5-e59e-408d-aaed-1a3cec73616a)
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
13/10:
Idag var sidste time med RoA. Idag fik jeg lavede en version 3 af spolen som var meget mindre hvilket resulterede i at motoren nu kunne dreje og åbne for papvinen. Vi fik også arbejdet på aller sidste del som skal holde tutten på papvinen nede mens der bliver trukket. Den fik vi printet en version 1 af som ikke helt passede. Ellers så er projektet færdigt. Derudover blev der printet 2 ekstra små spoler hvis nu der skulle ske den 1 noget da væggene på dem er skrøbelige.
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------




