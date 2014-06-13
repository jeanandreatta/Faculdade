package pesquisaordecao.ordenacao.vetor;

/**
 *
 * @author Jean Andreatta
 */
public class MergeSort{
    
    public static void mergeSort(Object[] v)
    {
        Object[] tmp = new Object[v.length];
        mergeSort(v, tmp,  0,  v.length - 1);
    }
    private static void mergeSort(Object [] v, Object [ ] tmp, int left, int right)
    {
            if( left < right )
            {
                    int center = (left + right) / 2;
                    mergeSort(v, tmp, left, center);
                    mergeSort(v, tmp, center + 1, right);
                    merge(v, tmp, left, center + 1, right);
            }
    }
    private static void merge(Object[ ] v, Object[ ] tmp, int left, int right, int rightEnd )
    {
        int leftEnd = right - 1;
        int k = left;
        int num = rightEnd - left + 1;
      
        while(left <= leftEnd && right <= rightEnd)
            if(v[left].toString().compareTo(v[right].toString()) <= 0)
                tmp[k++] = v[left++];
            else
                tmp[k++] = v[right++];

        while(left <= leftEnd)    // Copy rest of first half
            tmp[k++] = v[left++];

        while(right <= rightEnd)  // Copy rest of right half
            tmp[k++] = v[right++];

        // Copy tmp back
        for(int i = 0; i < num; i++, rightEnd--)
            v[rightEnd] = tmp[rightEnd];
    }

}
