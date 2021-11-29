#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct saban
{
	int  saban;
	int  busa;
	int  bungi1;
	int  bungi2;
	int  bungi3;
	int  bungi4;
	int  tot;
	int  rank;
} s[20], sa;

void InsaFile();
void SilfileSang();
void SilfileSum();
void SabanGam();
void SabanGrp();

void main()
{
	int sel=-1;	
	while(sel !=0)
	{
		system("cls");
		printf("\n\n");
		printf("\t\t*** Main Menu ***\n\n");
		printf("\t\t 1. �λ����� ����\n\n");
		printf("\t\t 2. �������� ����\n\n");
		printf("\t\t 3. �������� ���� \n\n");
		printf("\t\t 4. �� �� �˻�\n\n");
		printf("\t\t 5. �� �� �˻�\n\n");		
		printf("\t\t 0. ��     ��\n\n");
		printf("\t\t  ........[ ]\b\b");
		scanf("%d", &sel);

		switch(sel)
		{
			case  0 : printf("���α׷��� �����մϴ�...\n\n"); break;
			case  1 : InsaFile(); break;
			case  2 : SilfileSang(); break;
			case  3 : SilfileSum(); break;
			case  4 : SabanGam(); break;
			case  5 : SabanGrp(); ;
		}
	}
	
}

void InsaFile()
{
	FILE *wfp1, *wfp2, *wfp3;
	int i, j;
	srand((unsigned)time(NULL));
	wfp1 = fopen("c:\\insa.txt", "w");
	wfp2 = fopen("c:\\insa.txt", "w");
	wfp3 = fopen("c:\\insa.txt", "w");

	for(i=0; i<20; i++)
	{
		s[i].saban  = rand() % (20-1+1)+1;
		s[i].busa   = i+1;
		s[i].bungi1  = rand() % (50-20+1)+20;
		s[i].bungi2 = rand() % (50-20+1)+20;
		s[i].bungi3 = rand() % (50-20+1)+20;
		s[i].bungi4 = rand() % (50-20+1)+20;
		s[i].tot  = s[i].bungi1 + s[i].bungi2 + s[i].bungi3 + s[i].bungi4;
	}
	for(i=0; i<50; i++)
	{
		s[i].rank = 1;
		for(j=0; j<50; j++)
			if(s[i].tot < s[j].tot) s[i].rank++;

		switch(s[i].saban)
		{
			case 1 : fprintf(wfp1, "%d% d %d %d %d %d %d %d\n", s[i].saban, s[i].busa , s[i].bungi1, s[i].bungi2, s[i].bungi3, s[i].bungi4, s[i].tot, s[i].rank); break;
			case 2 : fprintf(wfp2, "%d% d %d %d %d %d %d %d\n", s[i].saban, s[i].busa , s[i].bungi1, s[i].bungi2, s[i].bungi3, s[i].bungi4, s[i].tot, s[i].rank); break;
			case 3 : fprintf(wfp3, "%d% d %d %d %d %d %d %d\n", s[i].saban, s[i].busa , s[i].bungi1, s[i].bungi2, s[i].bungi3, s[i].bungi4, s[i].tot, s[i].rank);
		}
	}

	fclose(wfp1);
	fclose(wfp2);
	fclose(wfp3);
	printf("\n\n �λ������� �����Ǿ����ϴ�. '0' ���Է��ϼ���.");
	scanf("%d", &i);
	
}

void SilfileSang()
{
	FILE *wfp1, *wfp2, *wfp3;
	int i, j;
	srand((unsigned)time(NULL));
	wfp1 = fopen("c:\\sil01.txt", "w");
	wfp2 = fopen("c:\\sil02.txt", "w");
	wfp3 = fopen("c:\\sil03.txt", "w");

	for(i=0; i<50; i++)
	{
		s[i].saban  = rand() % (20-1+1)+1;
		s[i].busa   = i+1;
		s[i].bungi1  = rand() % (50-20+1)+20;
		s[i].bungi2 = rand() % (50-20+1)+20;
		s[i].bungi3 = rand() % (50-20+1)+20;
		s[i].bungi4 = rand() % (50-20+1)+20;
		s[i].tot  = s[i].bungi1 + s[i].bungi2 + s[i].bungi3 + s[i].bungi4;
	}
	for(i=0; i<20; i++)
	{
		s[i].rank = 1;
		for(j=0; j<50; j++)
			if(s[i].tot < s[j].tot) s[i].rank++;

		switch(s[i].saban)
		{
			case 1 : fprintf(wfp1, "%d% d %d %d %d %d %d %d\n", s[i].saban, s[i].busa , s[i].bungi1, s[i].bungi2, s[i].bungi3, s[i].bungi4, s[i].tot, s[i].rank); break;
			case 2 : fprintf(wfp2, "%d% d %d %d %d %d %d %d\n", s[i].saban, s[i].busa , s[i].bungi1, s[i].bungi2, s[i].bungi3, s[i].bungi4, s[i].tot, s[i].rank); break;
			case 3 : fprintf(wfp3, "%d% d %d %d %d %d %d %d\n", s[i].saban, s[i].busa , s[i].bungi1, s[i].bungi2, s[i].bungi3, s[i].bungi4, s[i].tot, s[i].rank);
		}
	}

	fclose(wfp1);
	fclose(wfp2);
	fclose(wfp3);
	printf("\n\n �μ��� ���������� �����Ǿ����ϴ�. '0' ���Է��ϼ���.");
	scanf("%d", &i);
	
}
void SilfileSum()
{
	FILE *rfp1, *rfp2, *rfp3, *wfp;
	int i;
	srand((unsigned)time(NULL));
	rfp1 = fopen("c:\\sil01.txt", "r");
	rfp2 = fopen("c:\\sil02.txt", "r");
	rfp3 = fopen("c:\\sil03.txt", "r");
	wfp  = fopen("c:\\siltot.txt",  "w");
	while(1)
	{
		fscanf(rfp1, "%d%d%d%d%d%d%d%d", &sa.saban, &sa.busa, &sa.bungi1, &sa.bungi2, &sa.bungi3, &sa.bungi4, &sa.tot, &sa.rank);
		if(feof(rfp1)) break;
		fprintf(wfp, "%d %d %d %d %d %d %d %d\n", &sa.saban, &sa.busa, &sa.bungi1, &sa.bungi2, &sa.bungi3, &sa.bungi4, &sa.tot, &sa.rank);
	}
	while(1)
	{
		fscanf(rfp2, "%d%d%d%d%d%d%d%d", &sa.saban, &sa.busa, &sa.bungi1, &sa.bungi2, &sa.bungi3, &sa.bungi4, &sa.tot, &sa.rank);
		if(feof(rfp2)) break;
		fprintf(wfp, "%d %d %d %d %d %d %d %d\n", &sa.saban, &sa.busa, &sa.bungi1, &sa.bungi2, &sa.bungi3, &sa.bungi4, &sa.tot, &sa.rank);
	}
	while(1)
	{
		fscanf(rfp3, "%d%d%d%d%d%d%d%d", &sa.saban, &sa.busa, &sa.bungi1, &sa.bungi2, &sa.bungi3, &sa.bungi4, &sa.tot, &sa.rank);
		if(feof(rfp3)) break;
		fprintf(wfp, "%d %d %d %d %d %d %d %d\n", &sa.saban, &sa.busa, &sa.bungi1, &sa.bungi2, &sa.bungi3, &sa.bungi4, &sa.tot, &sa.rank);
	}

	fclose(rfp1);
	fclose(rfp2);
	fclose(rfp3);
	fclose(wfp);
	printf("\n\n ���ս��������� �����Ǿ����ϴ�. '0' �� �Է��ϼ���.");
	scanf("%d", &i);

}
void SabanGam()
{
	FILE *rfp;
	int sel=-1, cnt;	
	
	while(1)
	{		
		system("cls");
		printf("\n\n");
		printf("\t\t �˻��ϰ��� �ϴ� ����� �Է��ϼ���(���κ��� : 0) [ ]\b\b");
		scanf("%d", &sel);
		if(sel == 0) break;
		
		rfp = fopen("c:\\insa.txt", "r");

		printf("======================\n");
		printf("���\t�հ�\t����\n");
		printf("----------------------\n");
		cnt = 0;
		while(1)
		{
			fscanf(rfp, "%d%d%d", &sa.saban, &sa.tot, &sa.rank);
			if(feof(rfp)) break;
			if(sa.saban == sel)
			{
					printf("%2d\t%3d\t%3d\n", sa.saban, sa.tot, sa.rank);
					cnt++;
			}
		}
		printf("============================================\n");
		if(cnt==0) printf("\n\n �˻��� ����� �����ϴ�.  '0' �Է��ϼ���\n"); 
		else 	   printf("\n\n %d ���� �����Ͱ� �˻� �Ǿ����ϴ�.   '0' �Է��ϼ���\n", cnt);
		scanf("%d", &cnt);

		fclose(rfp);
	}

}
void SabanGrp()
{
	FILE *rfp;
	int sel=-1, cnt;
	int i, j, error = 0;

	rfp = fopen("c:\\insa.txt", "r");
	cnt = 0;
	i = 0;
	while(1)
	{
		fscanf(rfp, "%d%d%d%d%d%d%d%d", &s[i].saban, &s[i].busa , &s[i].bungi1, &s[i].bungi2, &s[i].bungi3, &s[i].bungi4, &s[i].tot, &s[i].rank);
		if(feof(rfp)) break;			
		cnt++;
		i++;
	}
	fclose(rfp);
			
	while(sel !=0)
	{		
		system("cls");
		printf("\n\n");
		printf("\t***** ��ü�˻�(�� %d�� �˻�) *****\n\n", cnt);
		printf("\t\t ��Ʈ��� : 1. ���   2. �μ�   3. ����   0. ����  [ ]\b\b");
		scanf("%d", &sel);
		if(sel < 0 || sel > 3) printf("\n\n �˻��ϰ��� �ϴ� ����� �Է��ϼ��� ");
		else 
		{
			if(sel == 0) break;
			switch(sel)
			{
				case 0 : break;
				case 1 : 
					for(i=0; i<49; i++)
					{
						printf("%2d\t%2d\t%2d\t%2d\t%2d\t%2d\t%3d\t%3d\n", s[i].saban, s[i].busa , s[i].bungi1, s[i].bungi2, s[i].bungi3, s[i].bungi4, s[i].tot, s[i].rank);
						for(j=i+1; j<50; j++)
						{
							if(s[i].saban > s[j].saban)
							{
								sa   = s[i];
								s[i] = s[j]; 
								s[j] = sa;
							}					
						}
					}
					break;
				case 2 : 
					for(i=0; i<49; i++)
					{
						for(j=i+1; j<50; j++)
						{
							if(s[i].busa > s[j].busa)
							{
								sa   = s[i];
								s[i] = s[j]; 
								s[j] = sa;
							}
						}
					}
					break;
				case 3 :
					for(i=0; i<49; i++)
					{
						for(j=i+1; j<50; j++)
						{
							if(s[i].rank > s[j].rank)
							{
								sa   = s[i];
								s[i] = s[j]; 
								s[j] = sa;
							}
						}
					}				
			}
			
			printf("============================================\n");
			printf("���\t�μ�\t1�б�\t2�б�\t3�б�\t4�б�\t����\t����\n");
			printf("--------------------------------------------\n");
			
			for(i=0; i<50; i++)
				printf("%2d\t%2d\t%2d\t%2d\t%2d\t%2d\t%3d\t%3d\n", s[i].saban, s[i].busa , s[i].bungi1, s[i].bungi2, s[i].bungi3, s[i].bungi4, s[i].tot, s[i].rank);
			
			printf("============================================\n");
		}		
		printf("\n\n \t �˻��Ϸ� '0' �� �Է��ϼ���. ");
		scanf("%d", &i);
	}

}