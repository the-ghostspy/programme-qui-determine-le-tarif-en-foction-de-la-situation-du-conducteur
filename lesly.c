#include <stdio.h>
 const char* DetermineTarif(int age,int datePemis,int nbAcidents){
    if(age < 25 && datePemis < 2 ){
        if (nbAcidents==0){
        return "TARIF ROUGE";
        }
    
    else{
        return "AUCCUNE ASSURANCE";
    }
    }
     else if((age < 25 && datePemis > 2 )|| (age > 25 && datePemis < 2 )){
        if( nbAcidents == 0){
        return " TARIF ORANGE" ;
        }
        else if( nbAcidents == 1){
            return "TARIF ROUGE";
        }
        else {
            return " REFUSER";
        }
     }
     
     else if(age >= 25 && datePemis >= 2 ){
        if(nbAcidents == 0){
            return "TARIF VERT";
        }
        else if(nbAcidents == 1){
            return"TARIF ORANGE";
        }
        else if ( nbAcidents == 2){
            return " TARIF ROUGE";
        }
        else{
            return " REFUSER ";
        }
     }
}
int main (){
int monAge,  maDate_permis, monNb_accident;

printf("entrer votre age : ");
scanf("%d",&monAge);

printf("entrer votre date de permis :");
scanf("%d",&maDate_permis);

printf("entrer votre nombre d'accident :");
scanf("%d",&monNb_accident);




const char* monTarif = DetermineTarif(monAge,maDate_permis,monNb_accident);
// affichage du resultat
printf("Votre tarif est : %s\n", monTarif); 
 
return 0;
}
