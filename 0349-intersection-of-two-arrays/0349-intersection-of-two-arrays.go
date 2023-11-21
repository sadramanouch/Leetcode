func intersection(nums1 []int, nums2 []int) []int {
    intCount := make(map[int]bool)
    for _, num := range nums1{
        intCount[num] = true
    }
    var result[] int
    for _, num := range nums2 {
        if intCount[num] {
            result = append(result, num)
            delete(intCount, num)
        }
    }
    return result
}