nums = []
for i in range(5):
    n = int(input(f"{i+1}��° ���ڸ� �Է��ϼ���: "))
    nums.append(n)

max_val = nums[0]
for num in nums:
    if num > max_val:
        max_val = num

print(f"�ִ��� {max_val}�Դϴ�.")

