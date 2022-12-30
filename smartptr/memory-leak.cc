int main()
{
  int *aptr = new int(3);
  aptr = nullptr;
  // cannot use *aptr now
  return 0;
}
