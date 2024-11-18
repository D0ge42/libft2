#include <stdio.h>
#include <string.h>
size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
  int i = 0;
  
  //Se size è uguale a 0 non c'è nulla da copiare. 
  //Tuttavia, la funzione vuole come ritorno la lunghezza totale
  //della stringa che abbiamo provato a copiare(src), quindi la calcoliamo.
  if (size == 0) 
  {
    while(src[i])
      i++;
    return i;
  }
  //Qui facciamo un ciclo che va da i = 0 fino a size - 1.
  //Copieremo i caratteri da src a dst, utilizzando l'indice "i".
  //-1 perchè si parte dall'index 0.
  //E inoltre perchè così abbiamo spazio per metterci il null terminator.
  while (src[i]!='\0' && i < size - 1)
  {
    dst[i] = src[i];
    i++;
  }
  //Aggiungiamo il null terminator alla fine della stringa copiata perchè
  //con il ciclo di prima abbiamo copiato finchè la stringa era diversa dal null terminator
  //e finchè i era minore di size - 1. 
  //Manca quindi il null terminator. 
  dst[i] = '\0';
  return i; 
  //Ritorniamo la lunghezza della stringa che abbiamo provato a copiare.
  //Questo sarà utile perchè si potrà capire se c'è una discrepanza tra la stringa copiata
  //e la lunghezza della stringa da copiare.
  //Se la lunghezza ritornata è uguale alla lunghezza di src, abbiamo copiato tutti i caratteri
  //e non ci sono stati troncamenti.
  //Se la lunghezza ritornata è maggiore allora c'è stato un troncamento che riscontreremo in dest.
}

int main()
{
  char src[5] = "ciao";
  char dest[5] = "daje";
  
  int i = ft_strlcpy(dest, src, 4);
  printf("%i\n",i);
  printf("%s\n", dest);
}
