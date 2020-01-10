#include <iostream>
using namespace std;

class box
	{
		public:
			int width;
			void setheight(int hei);
			void setwidth(int wid)
			{
				width = wid;
			}
		private:
			int height;
		protected:
			int he;		
	};
	void box::setheight(int hei)
	{
		height = hei;
	}


int main()
{
	

	return 0;
} 
