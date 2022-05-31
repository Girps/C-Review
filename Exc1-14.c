#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

/*
    Ex1-14
    Write a program that prints histogram on the frequencies of different characters in its input
*/


int main()
{
    // Characters of alphabet
    int alphabet[52];

    int c = 0;  // char

    // Zero initialize array
            for(int i =0; i < sizeof(alphabet)/sizeof(int); i++)
            {
                *(alphabet + i) = 0;
            }

    // Check if end of file
    while(( c = getchar() )!= '\n')
        {
            // If c is a letter
            if( (c > 64 && c < 91) || (c > 96  && c < 123) )
                {
                    // Add character count to the int array
                        switch(c)
                        {
                        case(65): alphabet[0]++;
                            break;
                        case(66): alphabet[1]++;
                            break;
                        case(67): alphabet[2]++;
                            break;
                        case(68): alphabet[3]++;
                            break;
                        case(69): alphabet[4]++;
                            break;
                        case(70): alphabet[5]++;
                            break;
                        case(71): alphabet[6]++;
                            break;
                        case(72): alphabet[7]++;
                            break;
                        case(73): alphabet[8]++;
                            break;
                        case(74): alphabet[9]++;
                            break;
                        case(75): alphabet[10]++;
                            break;
                        case(76): alphabet[11]++;
                            break;
                        case(77): alphabet[12]++;
                            break;
                        case(78): alphabet[13]++;
                            break;
                        case(79): alphabet[14]++;
                            break;
                        case(80): alphabet[15]++;
                            break;
                        case(81): alphabet[16]++;
                            break;
                        case(82): alphabet[17]++;
                            break;
                        case(83): alphabet[18]++;
                            break;
                        case(84): alphabet[19]++;
                            break;
                        case(85): alphabet[20]++;
                            break;
                        case(86): alphabet[21]++;
                            break;
                        case(87): alphabet[22]++;
                            break;
                        case(88): alphabet[23]++;
                            break;
                        case(89): alphabet[24]++;
                            break;
                        case(90): alphabet[25]++;
                            break;
                            // Lower case
                        case(97): alphabet[26]++;
                            break;
                        case(98): alphabet[27]++;
                            break;
                        case(99): alphabet[28]++;
                            break;
                        case(100): alphabet[29]++;
                            break;
                        case(101): alphabet[30]++;
                            break;
                        case(102): alphabet[31]++;
                            break;
                        case(103): alphabet[32]++;
                            break;
                        case(104): alphabet[33]++;
                            break;
                        case(105): alphabet[34]++;
                            break;
                        case(106): alphabet[35]++;
                            break;
                        case(107): alphabet[36]++;
                            break;
                        case(108): alphabet[37]++;
                            break;
                        case(109): alphabet[38]++;
                            break;
                        case(110): alphabet[39]++;
                            break;
                        case(111): alphabet[40]++;
                            break;
                        case(112): alphabet[41]++;
                            break;
                        case(113): alphabet[42]++;
                            break;
                        case(114): alphabet[43]++;
                            break;
                        case(115): alphabet[44]++;
                            break;
                        case(116): alphabet[45]++;
                            break;
                        case(117): alphabet[46]++;
                            break;
                        case(118): alphabet[47]++;
                            break;
                        case(119): alphabet[48]++;
                            break;
                        case(120): alphabet[49]++;
                            break;
                        case(121): alphabet[50]++;
                            break;
                        case(122):alphabet[51]++;
                            break;
                        default:
                                break;
                        }
                }

        }

        // Count freq of letters
        int alp = 'A';
        for(int i =0; i < sizeof(alphabet)/sizeof(int); i++)
            {
                printf("%c: %d\t",alp,alphabet[i]);
                alp++; // inc to next character
                if(alp % 5 == 0)
                    {
                        printf("\n");
                    }

                if(alp == '[')
                    {
                    alp += 6;
                    }
            }





    return 0;
}


