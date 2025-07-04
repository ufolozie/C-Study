class Circle // 헤더파일. Circle 클래스의 정의, 즉 모든 데이터 필드와 생성자 원형, 함수 원형을 목록으로 만듦
{
public:
	// 원의 반지름
	double radius;

	// 기본 circle 객체 생성
	Circle();

	// circle 객체 생성
	Circle(double);

	// 원의 면적 반환
	double getArea();
};