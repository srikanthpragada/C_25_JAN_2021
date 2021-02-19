
struct product
{
  int id;
  char name[30];
  float price;
};

void main()
{
  struct product p;

    p.id = 1;
    strcpy(p.name, "iPad");
    p.price = 45000;

    printf("%d  %s %.2f", p.id,p.name,p.price);
}
