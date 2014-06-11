package pesquisaordecao.ordenacao.vetor;

import java.lang.reflect.Array;

/**
 * @author Jean Andreatta
 */
class SortingMethods {
    
    protected static Object[] getVetor(Object vet){
        if(vet.getClass().isArray())
        {
            int length = Array.getLength(vet);
            Object[] vetor = new Object[length];
            for(int i = 0; i < length; ++i){
                vetor[i] = Array.get(vet, i);
            }
            return vetor;
        }
        return null;
    }
}
