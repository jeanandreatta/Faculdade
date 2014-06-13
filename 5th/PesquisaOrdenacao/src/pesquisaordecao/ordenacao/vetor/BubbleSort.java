package pesquisaordecao.ordenacao.vetor;

/**
 *
 * @author Jean Andreatta
 */
public class BubbleSort {
    
    public static void bubbleSort(Object[] v)
    {
        boolean flag=true;
        int ordenados=0;
        Object hold;
        for(int i=0;i<v.length-1&&flag;i++){
            flag=false;
            for(int j=0;j<v.length-ordenados;j++){
                
                if(v[j].toString().compareTo(v[j+1].toString())>0){
                    flag=true;
                    hold=v[j+1];
                    v[j+1]=v[j];
                    v[j]=hold;
                }
            }
            ordenados++;
        }
    }
}
