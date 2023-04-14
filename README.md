# dvigalo-za-tovorjenje-hrane
V restavraciji je jedilnica v drugem nadstropju kot kuhinja. Zato je vgrajeno dvigalo (vrtenje motorja naprej/nazaj preko tranzistorja) za tovorjenje hrane. Za pomik gor (vrtenje motorja v eno smer) je potrebno držati tipko GOR. Dviganje se konča, ko doseže dvigalo zgornji položaj, kar zazna senzor Kzg. Pomik dol poteka, če držimo tipko DOL. Ko dvigalo doseže spodnji položaj (senzor Ksp) se spuščanje ustavi. Hkratni pritisk obeh tipk naj krmilje ignorira. Če je dvigalo v gibanju, to signalizira rdeča LED. Senzorje
uporabljeni komponenti:
![image](https://user-images.githubusercontent.com/130037393/231946386-e2aabad5-c3f1-4590-a7b8-d8a6ccd23c6f.png)

![image](https://user-images.githubusercontent.com/130037393/231949950-84486b89-ac5d-44cb-881a-95f874f5d6eb.png)
![MicrosoftTeams-image](https://user-images.githubusercontent.com/130037393/231961676-03d69cb1-e279-47b8-a014-ecd0f3ede76e.png)
![image](https://user-images.githubusercontent.com/130037393/231962126-4119796e-ffce-4262-9469-14ac1349b7af.png)
![image](https://user-images.githubusercontent.com/130037393/231994953-eb73e5e9-8094-47f6-9547-93ed9d9c8294.png)

Ta projekt je bil poučen, izboljšala bi ga lahko z tem, da bi dodala vezave za več krmilnikov kot Arduino Uno, ter več kod kot le C++. Ta vezava bi bila tudi veliko boljša, če bi imela LED luči za signaliziranje, kdaj je dvigalo na vrhu in kdaj je na dnu. Vezju todi manjka luč, ki prikazuje nepravilno delovanje dvigala oziroma prikazuje, da je dvigalo pokvarjeno.



