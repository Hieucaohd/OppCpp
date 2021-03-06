#pragma once
#include <iostream>
#include <string>
#include <vector>

#include "../Nope/Nope.h"

using namespace std;

/* Gia thiet rang gia tri uu tien cua cac phan tu co the bang nhau.*/
class CPriorityQueue
{
private:
	CNope *m_array_datas; // mang cac phan tu cua hang uu tien.
	int m_size; // kich thuoc cua mang array_datas.
	int m_last; // m_last + 1 = so luong cac phan tu co trong mang.

	void shiftDown(int index);
	/* Day du lieu trong dinh index den vi tri 
	 * thich hop.
	 * */

public:
	CPriorityQueue();
	/* Constructor rong.
	 * */

	CPriorityQueue(int size_parameter);
	/* Constructor: cap phat dong cho mang chua du lieu size_parameter 
	 * phan tu va khoi tao mot hang uu tien rong.
	 * */
	
	CPriorityQueue(CNope *array_datas_parameter, int number_of_elements);
	/* Constructor khoi tao mot hang uu tien 
	 * tu mot mang cho truoc cac phan tu.
	 * */
	
	CPriorityQueue(const CPriorityQueue &priority_queue);
	/* Constructor copy.
	 * */

	CPriorityQueue(const CPriorityQueue *priority_queue_ptr);
	/* Constructor copy con tro.
	 * */

	CPriorityQueue operator = (const CPriorityQueue &priority_queue);
	/* Dinh nghia toan tu gan.
	 * */

	~CPriorityQueue();
	/* Destructor.
	 * */

	CNope findMin();
	/* Tra ve phan tu co gia tri uu tien nho nhat.
	 * */
	
	CNope deleteMin();
	/* Loai va tra ve phan tu co gia tri uu tien nho nhat.
	 * */
	
	void insert(const typeOfData &data_parameter, const typeOfPriority &priority_parameter);
	/* Them phan tu vao hang uu tien.
	 * */

	void insert(const CNope &new_nope);
	/* Them phan tu vao hang uu tien.
	 * */

	void upSizeArray();
	/* Ham dung de tang kich thuoc cua mang array_datas 
	 * trong truong hop mang day.
	 * */

	int lengthOfPriQueue();
	/* Tra ve so luong phan tu trong hang uu tien.
	 * */
};
