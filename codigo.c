#include <stdio.h>

#define REJ "Rejeitado\n"
#define APR "Aprovado\n"
#define RELATORIO "id:%d vencimento:%d emissor:%c genero:%c\n"

typedef struct imigrante {
    int ID;
    int ano;
    char pais;
    char genero;
    int status;
} Imigrante;

int main(){
  Imigrante Imigrante;
  int nr_imigrantes, contador=0;

  scanf("%d", &nr_imigrantes);

  int vet_status[nr_imigrantes], vet_ID[nr_imigrantes], vet_ano[nr_imigrantes];
  char vet_pais[nr_imigrantes], vet_genero[nr_imigrantes];

  while (contador<nr_imigrantes){

scanf("%d\n%d\n %c\n %c\n", &Imigrante.ID, &Imigrante.ano, &Imigrante.pais, &Imigrante.genero);

    if (Imigrante.ID>=100 && Imigrante.ID<=999 && Imigrante.ano>=2021 && (Imigrante.pais=='A' || Imigrante.pais=='S' || Imigrante.pais=='K') && (Imigrante.genero=='M' || Imigrante.genero=='F' || Imigrante.genero=='O')){

      Imigrante.status=1;
      printf(APR);
    } else{
      Imigrante.status=0;
      printf(REJ);
    }
      vet_status[contador]=Imigrante.status;
      vet_ID[contador]=Imigrante.ID;
      vet_ano[contador]=Imigrante.ano;
      vet_pais[contador]=Imigrante.pais;
      vet_genero[contador]=Imigrante.genero;
    
     contador++;
  }
  return (0);
}