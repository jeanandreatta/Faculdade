package pesquisaordecao.ordenacao.vetor;

import java.util.LinkedList;
import java.util.List;


/**
 *
 * @author Jean Andreatta
 * Metodos de Ordenacao para o vetor
 */
 public class Vetor{
    /**
     * MergeSort no vetor
     * @param vector vetor com os dados
     * @return o retorno é nulo se <code>vector</code>não for um array
     * ou um vetor de Object
     */
    public static Object[] mergeSort(Object vector)
    {
        Object[] vet=SortingMethods.getVetor(vector);
        if(vet==null)return null;
            MergeSort.mergeSort(vet);
        return vet;
    }
    /**
     * Exibe um vetor
     * @param v 
     */
    public static void exibe(Object v)
    {
        System.out.println("-----Vetor-----");
        Object[] vet=SortingMethods.getVetor(v);
        for(Object v1:vet){
            System.out.println(v1.toString());
        }
    }
    public static int[] convert(Object[] v)
    {        
        int[] vet=new int[v.length];
        for(int i=0;i<v.length;i++)
            vet[i]=(int)v[i];
        return vet;
    }
}

