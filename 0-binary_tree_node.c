#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_node - Yeni bir ikili ağac düyünü yaradır
* @parent: Atası olan düyün
* @value: Düyünün saxlayacağı dəyər
*
* Return: Yeni yaradılmış düyün (və ya NULL əgər yaddaş ayrılmadısa)
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    // Yeni düyün üçün yaddaş ayırırıq
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

    // Yaddaş ayrılmadısa NULL qaytarırıq
    if (!new_node)
        return (NULL);

    // Yeni düyünə dəyəri təyin edirik
    new_node->n = value;
    
    // Sol və sağ uşaqlar NULL olacaq
    new_node->left = NULL;
    new_node->right = NULL;
    
    // Atanı təyin edirik (əgər varsa)
    new_node->parent = parent;

    // Yeni yaradılan düyünü qaytarırıq
    return (new_node);
}

