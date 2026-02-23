=============================================================

C/C++ Seminar

Guten Morgen

Peter Loos

Dienstag: Start:  8.45 == Ende: 16.45.

=============================================================

peter.loos@gmx.de

https://github.com/pelocpp

https://github.com/pelocpp/c_introduction

=============================================================

Wie lernt man Programmieren:  Üben, üben, üben

=============================================================

Wie lernt man Programmieren:  Präzises Arbeiten

=============================================================

C/C++: Performanz  ===> schnelle Programme

==> Kenntnisse von der Rechnerarchitektur

Ganze Zahlen im Speicher dargestellt ...

=============================================================



Wir schreiben ein Programm :)

== Editor / Programm, um den Text einzugeben
   ( einfaches Textverarbeitungsprogramm )

== Was geben wir da ein:  Anweisungen

== Regeln: Womit ist eine Programmiersprache ähnlich / zu vergleichen:

   Natürlichen Sprache:

   Worte einer Programmiersprache: Lexikon 
   Grammatik // Syntax // Rechtschreibung

   C ===> Lexikon // Grammatik

   Falsche Sätze eingegeben:   Spezialprogramm: Übersetzer // Compiler

====================================================================

Ziel einer Sprachüberprüfung:

a) Korrekte Grammatik
b) Ergebnis:  Maschinenprogramm // Anweisungen, die der Rechner versteht.
              Assembler

CPU:  Intel Pentium  // Intel i7  i9 

Central Processing Unit

=============================================================

Entwicklungsumgebung:  All - In

Visual Studio Community (for-free) 2022 // 2026 // Professional

// Visual Code



syntax error: missing ';' before '{'

syntax error: missing ')' before '{'


=========================

i) Menü "Kompilieren": Grammatik

ii) Programm erstellen.

    Menü "Neu erstellen": 

=========================

Übersetzer:  Grammatik

a) Compiler : Input:     Dateien mit der Endung .c // Quelltext

b) Linker:  Input:       Object Files (.obj)

Jedes C Programm hat einen "Anfang".

Jedes C Programm hat einen "Einsprungpunkt"

In der Sprache: Unterprogramm: main.

Das Unterprogramm "main" ist der Einsprungpunkt.


Beispiel für Maschinensprache:

    int a = 1;
00007FF7888418AC  mov         dword ptr [a],1  
    int b = 2;
00007FF7888418B3  mov         dword ptr [b],2  
    int c;

    c = a + b;
00007FF7888418BA  mov         eax,dword ptr [b]  
00007FF7888418BD  mov         ecx,dword ptr [a]  
00007FF7888418C0  add         ecx,eax  
00007FF7888418C2  mov         eax,ecx  
00007FF7888418C4  mov         dword ptr [c],eax  


=======================================================

Erste Schritte in C:

Was ist eine Variable ?????????

Art Behältnis, das man Befüllen kann

a) Ist ein Stück Speicher, dem man einen 
Namen gegeben hat.

b) Das Stück Speicher wird 
   in einem bestimmten Format interpretiert / angesehen.
 
   Format ====> Datentyp

Ganze Zahl      123         int
Gleitpunktzahl: 123.34534   float
Zeichenkette:   "ABC"    


{
   int   variable1;
   float variable2;

Datentyp Ganze Zahl:  int

===> Es gibt MEHRERE Datentypen für
     ganze Zahlen.

     Um festzulegen, wie GROSS
     der Speicherbereich sein soll.

Die Zahl 123 liegt als 0 und 1 im Speicher:

Bits:

Rechnerarchitektur
Digitaktechnik
Zweier-Komplement

1 Byte:  8 Bits (0 und 1)
2 Byte:  16
4 Byte:  32
8 Byte:  64

Wertebereich

unsigned char   1 Byte
short           2 Byte (Word)  // IMMER
int             4 Byte (Double Word) // Hängt vom Rechner ab // EAX
long            4 Byte  // dto.
long long       8 Byte (Quad Word) // IMMER

Tipp: Best Practice

Nimm immer int
Dann nimm long long

Gleitpunktzahlen:

float:    4 Byte
double:   8 Byte

IEEE Format  

123.34534 ==> 0 und 1 im Speicher abgebildet.

==================================================

Zum Testen:

Zum Erklären:

Wie kann man ein Programm 
Schritt für Schritt ausführen?

Test-Modus:  Debug-Modus

Stopp-Punkte setzen // Halte-Punkte // Break-Point

F9 - Taste

Eine Zeile ausführen

TDD

Test Driven Development


==================================================


Wie kann man mit Anweisungen arbeiten:

Kontrollstrukturen

== Vergleich

SYNTAX:

if ( bedingung )
{
}

bedingung: Ausdruck, der wahr oder falsch ist.

=================================

C ist eine Format-FREIE Sprache

=================================

IF:    Bedingung

true // false  // wahr // falsch

Bedingung kann man schachteln // Verknüpfen

Logisches Und:      &&
Logisches Oder:     ||

Logisches Nicht:    !

Aus wahr => falsch, falsch => wahr

Regelwerk für die Reihenfolge
in der Auswertung von Operatoren:

Operatoren Vorrang

Operator Precedence

======================================

if-Anweisung:

a) if "ohne alles"

b) if - else

c) if - else if

==============================================

if - Verwzweigung

while - Wiederholung

SYNTAX:

while ( bedingung )
{
    // ....
}

Bemerkung: Kann auch Null-mal durchlaufen werden.


SYNTAX: do-while Anweisung

do
{
    // ....
}
while ( bedingung );

Bemerkung: Wird mindestens Einmal
           durchlaufen werden.

==================================================

Speicherverwaltung eines C-Programms:
-------------------------------------

== Globale Variablen

== Lokale Variablen

== Dynamische Variablen (malloc, free)


== Globale Variablen:
   Vereinbarun: Mit Vorbelegung
   Zugriff: Zunächst über eine extern-Deklaration 

   Variante globaler Variablen:
   Global in einer Datei.
   Schlüsselwort: 


Was sind lokale Variablen:

== Sind für die Zeitdauer eines Unterprogrammaufrufs verfügbar
== Dafür gibt es eine spezielle Datenstruktur: Stapel // Stack
   "wie ein Bücherstapel"
== Vom Wesen her: Zwischergebnisse // kurzlebige Daten.

Dynamische Daten:

== Sind bei Gebrauch anzulegen: malloc (memory allocate)
== Sind, wenn sie nicht mehr gebraucht werden, freizugeben
   (free)

=============================================

Aufbau eines C-Programms

Unterprogramme

SYNTAX:

   
Rückgabetyp Unterprogramm_Name ( Parameter )
{
    Folge von Anweisungen
}


Was ist ein Parameter eines Unterprogramms:

Das was mitgegegen wird

Parameter: Stellvertreter // MIT TYP

=====================================

Extern-Deklaratoionen:

Header-Datei

=====================================

Unterprogramme:

2 Varianten:

== Ohne Ergebnis
== Mit Ergebnis

Variante mit Ergebnis:

Möchte 2 Zahlen addieren:

2 + 3 ==> 5

1 + 6 ==> 7

Unterprogramme strukturieren // zerlegen
ein größeres Programm in kleiner Einheiten.

==================================================

Rückgabe mehrerer Ergebnisse:

A) Nicht ganz trivial

B) Struktur // Verbund // Schachtel

C) Mit Adressen // Zeigern

==================================================
==================================================

Basis von C

Grundlagen von C

Konzept:  Zeigers // Pointer

Alleinstellungsmerkmal

== Schwieriger



warning C4047: 

'=': 'int *' differs in levels of indirection from 'int'


ACHTUNG; DAS IST FALSCH !!!!!!!!!!!!!!!!!

Whyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy


void malZwei(int wert)
{
    int result = wert;

    result = 2 * result;

    wert = result;
}

Ein Stellvertreter ist eine KOPIE des Werts,
der an das Unterprogramm übergeben worden ist.

x und wert sind zwei VERSCHIEDENE Variablen.




