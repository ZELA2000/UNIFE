void azzera(int v[], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        v[i] = 0; // Modifica diretta nel chiamante
    }
}

int main()
{
    int numeri[5] = {1, 2, 3, 4, 5};
    azzera(numeri, 5); // numeri viene modificato
    // Ora numeri = {0, 0, 0, 0, 0}
}