#ifdef CHANGED

#include "copyright.h"
#include "system.h"
#include "synchconsole.h"
#include "synch.h"

static Semaphore *readAvail;
static Semaphore *writeDone;

static void ReadAvailHandler(void *arg)
{
  (void) arg; readAvail->V();
}

static void WriteDoneHandler(void *arg)
{
  (void) arg; writeDone->V();
}

SynchConsole::SynchConsole(const char *in, const char *out)
{
  readAvail = new Semaphore("read avail", 0);
  writeDone = new Semaphore("write done", 0);
  console = new Console (in, out, ReadAvailHandler, WriteDoneHandler, 0);
}

SynchConsole::~SynchConsole()
{
  delete console;
  delete writeDone;
  delete readAvail;
}

void SynchConsole::SynchPutChar(int ch)
{
  console->PutChar (ch);
  writeDone->P ();
}

int SynchConsole::SynchGetChar()
{
  readAvail->P();
  return console->GetChar ();
  // CHANGED
}

void SynchConsole::SynchPutString(const char s[])
{
  int i=0;
  while(s[i]!='\0'){
    SynchPutChar(s[i]);
    i++;
  }
  // CHANGED
}

void SynchConsole::SynchGetString(char
				  *
				  s, int n)
{
  // ...
}
#endif // CHANGED

int copyStringFromMachine(int from, char *to, unsigned size){

char stok[size];
int i=0;

  for (i; i < size; i++)
  {
      if( !machine->ReadMem(form,1,(int *)stock[i]) ) break;
      if( stock[i] == '\0') break;
      to[i] = stock[i];
      from++;
  }

  to[i] = '\0';

}
