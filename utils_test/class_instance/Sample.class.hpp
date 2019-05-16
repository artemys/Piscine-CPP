#ifndef SAMPLE_CLASS_H
 #define SAMPLE_CLASS_H

class Sample {

public:
	int		member_attribute;
	void	member_function(void);
	Sample(void);
	~Sample(void);

	/* ascessor */
	int getprivate_attribute(void) const;
	void setprivate_attribute(int v);
	/* compare */
	int		compare(Sample *other) const;
	/*func no  membre */
	static int GetNonMemberAtrribute(void);

private:
	int		_private_attribute;
	void	_private_function(void) const;
	/* attribut non membre */
	static int	_nonMemberAttribute;
};

class Sample1{
public:
	char	a1;
	int 	a2;
	float	a3;
	Sample1(char p1, int p2, float p3 );
	~Sample1(void);
};

class Sample2{
public:
	char	a1;
	int 	a2;
	float	a3;
	Sample2(char p1, int p2, float p3 );
	~Sample2(void);
};
/*const*/

class Sample_const{
	public:
		float	const pi;
		int				i;

		Sample_const(float const f);
		~Sample_const();

	void	const_function(void) const;
};
 /*struct : par default scopes public, 
 class par default : scopes prive */

struct Sample_struct{
	int		i;
	Sample_struct(void);
	~Sample_struct(void);
};

#endif

