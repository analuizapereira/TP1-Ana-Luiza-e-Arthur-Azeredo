 #include<stdio.h>
    int main(){
        int num;
        char opcao;
        printf("Digite um número inteiro entre 1 e 12: \n");    
        scanf("%d", &num);
        switch(num){
            case 1:
                printf("\nJaneiro \n");
                //avançar e retroceder
                printf("\nMês sucessor: Digite '+'; \nMês anterior: Digite '-'; \nEscolha: ");
                scanf("%s", &opcao);
                if(opcao == '+'){
                    printf("Fevereiro \n");
                    break;            
                } else if(opcao == '-'){
                }else{
                    printf("não existe mês representado por este número \n");    
                    break;                
                }

            case 2:
                printf("\nFevereiro \n");
                //avançar e retroceder
                printf("\nMês sucessor: Digite '+'; \nMês anterior: Digite '-'; \nEscolha: ");
                scanf("%s", &opcao);
                if(opcao == '+'){
                    printf("Março \n");
                    break;            
                } else if(opcao == '-'){
                }else{
                    printf("Janeiro \n");    
                    break;                
                }

            case 3:
                printf("\nMarço \n");
                //avançar e retroceder
                printf("\nMês sucessor: Digite '+'; \nMês anterior: Digite '-'; \nEscolha: ");
                scanf("%s", &opcao);
                if(opcao == '+'){
                    printf("Abril \n");
                    break;            
                } else if(opcao == '-'){
                }else{
                    printf("Fevereiro \n");    
                    break;                
                }

            case 4:
                printf("Abril \n");
                //avançar e retroceder
                printf("\nMês sucessor: Digite '+'; \nMês anterior: Digite '-'; \nEscolha: ");
                scanf("%s", &opcao);
                if(opcao == '+'){
                    printf("Maio \n");
                    break;            
                } else if(opcao == '-'){
                }else{
                    printf("Março \n");    
                    break;                
                }

            case 5:
                printf("Maio \n");
                //avançar e retroceder
                printf("\nMês sucessor: Digite '+'; \nMês anterior: Digite '-'; \nEscolha: ");
                scanf("%s", &opcao);
                if(opcao == '+'){
                    printf("Junho \n");
                    break;            
                } else if(opcao == '-'){
                }else{
                    printf("Abril \n");    
                    break;                
                }

            case 6:
                printf("Junho \n");
                //avançar e retroceder
                printf("\nMês sucessor: Digite '+'; \nMês anterior: Digite '-'; \nEscolha: ");
                scanf("%s", &opcao);
                if(opcao == '+'){
                    printf("Julho \n");
                    break;            
                } else if(opcao == '-'){
                }else{
                    printf("Maio \n");    
                    break;                
                }

            case 7:
                printf("Julho \n");
                //avançar e retroceder
                printf("\nMês sucessor: Digite '+'; \nMês anterior: Digite '-'; \nEscolha: ");
                scanf("%s", &opcao);
                if(opcao == '+'){
                    printf("Agosto \n");
                    break;            
                } else if(opcao == '-'){
                }else{
                    printf("Junho \n");    
                    break;                
                }

            case 8:
                printf("Agosto \n");
                //avançar e retroceder
                printf("\nMês sucessor: Digite '+'; \nMês anterior: Digite '-'; \nEscolha: ");
                scanf("%s", &opcao);
                if(opcao == '+'){
                    printf("Setembro \n");
                    break;            
                } else if(opcao == '-'){
                }else{
                    printf("Julho \n");    
                    break;                
                }

            case 9:
                printf("Setembro \n");
                //avançar e retroceder
                printf("\nMês sucessor: Digite '+'; \nMês anterior: Digite '-'; \nEscolha: ");
                scanf("%s", &opcao);
                if(opcao == '+'){
                    printf("Outubro \n");
                    break;            
                } else if(opcao == '-'){
                }else{
                    printf("Agosto \n");    
                    break;                
                }

            case 10:
                printf("Outubro \n");
                //avançar e retroceder
                printf("\nMês sucessor: Digite '+'; \nMês anterior: Digite '-'; \nEscolha: ");
                scanf("%s", &opcao);
                if(opcao == '+'){
                    printf("Novembro \n");
                    break;            
                } else if(opcao == '-'){
                }else{
                    printf("Setembro \n");    
                    break;                
                }

            case 11:
                printf("Novembro \n");
                //avançar e retroceder
                printf("\nMês sucessor: Digite '+'; \nMês anterior: Digite '-'; \nEscolha: ");
                scanf("%s", &opcao);
                if(opcao == '+'){
                    printf("Dezembro \n");
                    break;            
                } else if(opcao == '-'){
                }else{
                    printf("Outubro \n");    
                    break;                
                }

            case 12:
                printf("Dezembro \n");
                //avançar e retroceder
                printf("\nMês sucessor: Digite '+'; \nMês anterior: Digite '-'; \nEscolha: ");
                scanf("%s", &opcao);
                if(opcao == '+'){
                    printf("não existe mês representado por este número \n");
                    break;            
                } else if(opcao == '-'){
                }else{
                    printf("Novembro \n");    
                    break;                
                }
            break;

            default:
                printf("não existe mês representado por este número \n");
        }
    }




