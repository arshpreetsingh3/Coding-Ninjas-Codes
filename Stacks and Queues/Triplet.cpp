template <typename T, typename V,typename F>

class Triplet {
	T x;
	V y;
    F z;
	public :

	void setX(T x) {
		this -> x = x;
	}

	T getX() {
		return x;
	}

	void setY(V y) {
		this -> y = y;
	}

	V getY() {
		return y;
	}
    
    void setZ(F z) {
		this -> z = z;
	}

	F getZ() {
		return z;
	}
    
};
