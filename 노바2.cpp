nums = []
for i in range(5):
    n = int(input(f"{i+1}번째 숫자를 입력하세요: "))
    nums.append(n)

max_val = nums[0]
for num in nums:
    if num > max_val:
        max_val = num

print(f"최댓값은 {max_val}입니다.")

