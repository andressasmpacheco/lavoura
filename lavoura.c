#include <stdio.h>
int main()
{
    int escolha;
    float area, preco,desc;
    printf("Escolha o serviço a ser utilizado\n\nTipo 1 ervas daninhas R$ 50,00 por acre\n\nTipo 2 gafanhotos R$ 100,00 por acre\n\nTipo 3 broca R$ 150,00 por acre\n\nTipo 4 todos acima R$ 250,00 por acre.\n\n" );
    scanf("%d", &escolha);
    if (escolha==1)
    {
        printf("Digite a area a ser pulverizada\n\n");
        scanf("%f", &area);
        if (area>1000)
        {
            preco = 50*area*0.05;
            printf("O preco a ser pago e %.2f\n\n", preco);
            if (preco>=750)
            {
                desc = preco*0.1;
                printf("O seu desconto e %.2f\n\n", desc);
            }
            else
            {
                printf("Sem desconto");
            }
        }
        else
        {
            preco=50*area;
            printf("O preço a ser pago e %.2f\n\n", preco);
            if (preco>=750)
            {
                desc = preco*0.1;
                printf("O seu desconto e %.2f\n\n", desc);
            }
            
        }
        
    }
    else if (escolha==2)
    {
       printf("Digite a area a ser pulverizada\n\n");
        scanf("%f", &area);
        if (area>1000)
        {
            preco = 100*area*0.05;
            printf("O preco a ser pago e %.2f\n\n", preco);
            if (preco>=750)
            {
                desc = preco*0.1;
                printf("O seu desconto e %.2f\n\n", desc);
            }
            else
            {
                printf("Sem desconto");
            }
        }
        else
        {
            preco=100*area;
            printf("O preço a ser pago e %.2f\n\n", preco);
            if (preco>=750)
            {
                desc = preco*0.1;
                printf("O seu desconto e %.2f\n\n", desc);
            }
            
        }
        
    }
    else if (escolha==3)
    {
       printf("Digite a area a ser pulverizada\n\n");
        scanf("%f", &area);
        if (area>1000)
        {
            preco = 150*area*0.05;
            printf("O preco a ser pago e %.2f\n\n", preco);
            if (preco>=750)
            {
                desc = preco*0.1;
                printf("O seu desconto e %.2f\n\n", desc);
            }
            else
            {
                printf("Sem desconto");
            }
        }
        else
        {
            preco=150*area;
            printf("O preço a ser pago e %.2f\n\n", preco);
            if (preco>=750)
            {
                desc = preco*0.1;
                printf("O seu desconto e %.2f\n\n", desc);
            }
            
        }
        
    }
    else if (escolha==4)
    {
       printf("Digite a area a ser pulverizada\n\n");
        scanf("%f", &area);
        if (area>1000)
        {
            preco = 250*area*0.05;
            printf("O preco a ser pago e %.2f\n\n", preco);
            if (preco>=750)
            {
                desc = preco*0.1;
                printf("O seu desconto e %.2f\n\n", desc);
            }
            else
            {
                printf("Sem desconto");
            }
        }
        else
        {
            preco=250*area;
            printf("O preço a ser pago e %.2f\n\n", preco);
            if (preco>=750)
            {
                desc = preco*0.1;
                printf("O seu desconto e %.2f\n\n", desc);
            }
            
        }
        
    }
   else{
    printf("Opção invalida");
   } 
}
