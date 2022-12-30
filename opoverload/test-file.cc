int main()
{
  int i;
  File file("testfile.c");

  for (i = 0; i < file.getsize(); i++)
    printf("%c", file[i]);

  return 0;
}
