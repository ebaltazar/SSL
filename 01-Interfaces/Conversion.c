const float FC = 5.0/9.0;   // constante Farenheit a Celsius
const float CF = 9.0/5.0;   // constante Celsius a Farenheit
const float DIF = 32.0;     // diferencia

float Celsius (float farh)
{
    return FC * (farh - DIF);
}

float Farenheit (float cels)
{
    return (cels * CF) + DIF;
}
