template <class T1=int, class T2=int>
	class dato {
		private:
			T1 x;
			T2 y;

		public:
			dato (const T1& a=0, const T2& b=0);
			
			virtual ~dato() {}			
              
			T1 GetX () const;

			T2 GetY () const;

	};

template <class T1, class T2>
	dato<T1,T2>::dato (const T1& a, const T2& b) : x(a), y(b) {}

template <class T1, class T2>
	T1 dato<T1,T2>::GetX() const {
		return x;
	}

template <class T1, class T2>
	T2 dato<T1,T2>::GetY() const {
		return y;
	}

