package main

import "fmt"


func twoSum(nums []int, target int) []int {
    
    result := make([]int, 2)
    for i:=0; i<len(nums);i++ {
        for a:=i+1; a<len(nums);a++ {
            if nums[i]+nums[a]==target{
                result[0]=i;
                result[1]=a;
                return result
            }
        }
    }
    return result
}

func main (){
	nums := []int{2,7,11,15}
	result := twoSum (nums, 9)

	fmt.Println(result)

}


