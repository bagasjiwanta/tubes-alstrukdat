// Nama : I Putu Andika Bagas Jiwanta
// NIM : 18220053 
// Topik : Prapraktikum 4
// Deskripsi : implementasi stack.h

#include <stdio.h>
#include "stack.h"

void CreateEmpty (Stack *S){
  Top(*S) = Nil;
};

boolean IsEmpty (Stack S){
  return Top(S) == Nil;
};

boolean IsFull (Stack S){
  return Top(S) == MaxEl;
};

void Push (Stack * S, infotype X){
  if (!IsEmpty(*S)) {
    Top(*S)++;
  } else {
    Top(*S) = 1;
  }
  InfoTop(*S) = X;
};

void Pop (Stack * S, infotype* X){
  *X = InfoTop(*S);
  Top(*S)--;
}