void etat_sol(char y) // trois états de sol possible, en fonction de la valeur x en sortie numérique
{
   lcd.clear();
   switch(y) 
  {
    case 0 :lcd.setCursor(4, 1); 
            lcd.print("SOL SEC");
            digitalWrite(LED_rouge_secheresse,HIGH);
            digitalWrite(LED_verte_humide,LOW);
            digitalWrite(LED_jaune_normal,LOW);
                                        
            break;
            
    case 1 :lcd.setCursor(3, 1);
            lcd.print("SOL NORMAL");
            digitalWrite(...?...);
            digitalWrite(...?...);
            digitalWrite(...?...);
         
            break;
            
    case 2 :lcd.setCursor(3, 1);
            lcd.print("SOL HUMIDE") ;
            digitalWrite(...?...);
            digitalWrite(...?...);
            digitalWrite(...?...);

  }          
}
