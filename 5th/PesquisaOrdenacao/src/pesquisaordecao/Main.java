/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package pesquisaordecao;

import pesquisaordecao.ordenacao.vetor.Vetor;

/**
 *
 * @author Jean Andreatta
 */
public class Main {

    public static void main(String args[]){
        String [] vet=new String[4];
        vet[0]="d";
        vet[1]="c";
        vet[2]="ba";
        vet[3]="a";
        int [] v={4,3,5,1};
        Vetor.exibe(vet);
        Vetor.exibe(Vetor.mergeSort(vet));
        Vetor.exibe(v);
        Vetor.exibe(Vetor.mergeSort(v));
        
    }
        class Disco{
            private int i;
            public Disco(int num)
            {i=num;}
            public int getI(){return i;}
            public void setI(int num){this.i=num;}
        }
}
