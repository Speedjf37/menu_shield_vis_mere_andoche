# ShieldKeypad

Creation d'un menu pour Arduino shield LCD Keypad
Testé avec les cartes Arduino UNO  et MEGA2560

Gestion du LCD mode // 4 bits BackLight pin 10
* LIB LiquidCrystal  (installer  la LIB)
* lcd(8, 9, 4, 5, 6, 7);


Gestion des boutons pin  Analog(0)
* LIB MD_UISwitch (installer  la LIB)
Gestion des appuis courts/longs repeat doubles

Gestion de l'Eeprom pour sauvegarde des paramètres
* LIB EEPROM (installer  la LIB)

Gestion de menu construit à partir du projet :

 * Name:     Arduino - Menu for Shield LCD
 * Autor:    Alberto Gil Tesa
 * Web:      http://giltesa.com
 * License:  CC BY-NC-SA 3.0
 * Date:     2016/12/10
 *
 
 Gestion du menu ( LCD : 16 car 2 lignes) (5 boutons: Select ,Haut, Bas, Gauche, Droit)
 Sous menu avec saisie de paramètres ,sous programme , sauve et restore Eeprom .
 
 Ecran principal
 Pour entrer dans le menu
 Appui long sur Select
 
		Pour choisir le menu boutons UP/DOWN
		Pour entrer dans la saisie ou valider le sous menu 
		Bouton RIGHT
				Pour changer la valeur INC/DEC (0 ,1 , 10, 100, 1000)
				Bouton RIGHT	
				INC valeur 
				Bouton UP
				DEC valeur 
				Bouton DOWN
 
				Pour revenir au menu 
				Bouton LEFT
		Pour sortir du menu et revenir à l'écran principal
		Bouton LEFT

Ecran principal
	* Ligne 0 Affichage des paramètres / ou des 888888 pour le démmarrage 
	* Ligne 1 Affichage des compteurs 
		Compteur pulse Tour permanent
		Compteur MVT (nb de tours VM) lorsque la butée est libre


 le shield laisse libre les pins:
 * Digital 2,3 et 11,12,13 
 * Analog  A1, A2, A3, A4, A5
 * VIn Gnd(2) 5V 3V3 Reset
 
 A1 entrée codeur
 A2 entrée butée AR
 
 
